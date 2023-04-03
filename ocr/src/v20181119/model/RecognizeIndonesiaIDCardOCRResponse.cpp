/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ocr/v20181119/model/RecognizeIndonesiaIDCardOCRResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

RecognizeIndonesiaIDCardOCRResponse::RecognizeIndonesiaIDCardOCRResponse() :
    m_nIKHasBeenSet(false),
    m_namaHasBeenSet(false),
    m_tempatTglLahirHasBeenSet(false),
    m_jenisKelaminHasBeenSet(false),
    m_golDarahHasBeenSet(false),
    m_alamatHasBeenSet(false),
    m_rTRWHasBeenSet(false),
    m_kelDesaHasBeenSet(false),
    m_kecamatanHasBeenSet(false),
    m_agamaHasBeenSet(false),
    m_statusPerkawinanHasBeenSet(false),
    m_perkerjaanHasBeenSet(false),
    m_kewargaNegaraanHasBeenSet(false),
    m_berlakuHinggaHasBeenSet(false),
    m_issuedDateHasBeenSet(false),
    m_photoHasBeenSet(false),
    m_provinsiHasBeenSet(false),
    m_kotaHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeIndonesiaIDCardOCRResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("NIK") && !rsp["NIK"].IsNull())
    {
        if (!rsp["NIK"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NIK` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nIK = string(rsp["NIK"].GetString());
        m_nIKHasBeenSet = true;
    }

    if (rsp.HasMember("Nama") && !rsp["Nama"].IsNull())
    {
        if (!rsp["Nama"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Nama` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nama = string(rsp["Nama"].GetString());
        m_namaHasBeenSet = true;
    }

    if (rsp.HasMember("TempatTglLahir") && !rsp["TempatTglLahir"].IsNull())
    {
        if (!rsp["TempatTglLahir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TempatTglLahir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tempatTglLahir = string(rsp["TempatTglLahir"].GetString());
        m_tempatTglLahirHasBeenSet = true;
    }

    if (rsp.HasMember("JenisKelamin") && !rsp["JenisKelamin"].IsNull())
    {
        if (!rsp["JenisKelamin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `JenisKelamin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jenisKelamin = string(rsp["JenisKelamin"].GetString());
        m_jenisKelaminHasBeenSet = true;
    }

    if (rsp.HasMember("GolDarah") && !rsp["GolDarah"].IsNull())
    {
        if (!rsp["GolDarah"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GolDarah` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_golDarah = string(rsp["GolDarah"].GetString());
        m_golDarahHasBeenSet = true;
    }

    if (rsp.HasMember("Alamat") && !rsp["Alamat"].IsNull())
    {
        if (!rsp["Alamat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Alamat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alamat = string(rsp["Alamat"].GetString());
        m_alamatHasBeenSet = true;
    }

    if (rsp.HasMember("RTRW") && !rsp["RTRW"].IsNull())
    {
        if (!rsp["RTRW"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RTRW` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rTRW = string(rsp["RTRW"].GetString());
        m_rTRWHasBeenSet = true;
    }

    if (rsp.HasMember("KelDesa") && !rsp["KelDesa"].IsNull())
    {
        if (!rsp["KelDesa"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KelDesa` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kelDesa = string(rsp["KelDesa"].GetString());
        m_kelDesaHasBeenSet = true;
    }

    if (rsp.HasMember("Kecamatan") && !rsp["Kecamatan"].IsNull())
    {
        if (!rsp["Kecamatan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kecamatan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kecamatan = string(rsp["Kecamatan"].GetString());
        m_kecamatanHasBeenSet = true;
    }

    if (rsp.HasMember("Agama") && !rsp["Agama"].IsNull())
    {
        if (!rsp["Agama"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Agama` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_agama = string(rsp["Agama"].GetString());
        m_agamaHasBeenSet = true;
    }

    if (rsp.HasMember("StatusPerkawinan") && !rsp["StatusPerkawinan"].IsNull())
    {
        if (!rsp["StatusPerkawinan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StatusPerkawinan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusPerkawinan = string(rsp["StatusPerkawinan"].GetString());
        m_statusPerkawinanHasBeenSet = true;
    }

    if (rsp.HasMember("Perkerjaan") && !rsp["Perkerjaan"].IsNull())
    {
        if (!rsp["Perkerjaan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Perkerjaan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_perkerjaan = string(rsp["Perkerjaan"].GetString());
        m_perkerjaanHasBeenSet = true;
    }

    if (rsp.HasMember("KewargaNegaraan") && !rsp["KewargaNegaraan"].IsNull())
    {
        if (!rsp["KewargaNegaraan"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KewargaNegaraan` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kewargaNegaraan = string(rsp["KewargaNegaraan"].GetString());
        m_kewargaNegaraanHasBeenSet = true;
    }

    if (rsp.HasMember("BerlakuHingga") && !rsp["BerlakuHingga"].IsNull())
    {
        if (!rsp["BerlakuHingga"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BerlakuHingga` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_berlakuHingga = string(rsp["BerlakuHingga"].GetString());
        m_berlakuHinggaHasBeenSet = true;
    }

    if (rsp.HasMember("IssuedDate") && !rsp["IssuedDate"].IsNull())
    {
        if (!rsp["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(rsp["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }

    if (rsp.HasMember("Photo") && !rsp["Photo"].IsNull())
    {
        if (!rsp["Photo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Photo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photo = string(rsp["Photo"].GetString());
        m_photoHasBeenSet = true;
    }

    if (rsp.HasMember("Provinsi") && !rsp["Provinsi"].IsNull())
    {
        if (!rsp["Provinsi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Provinsi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provinsi = string(rsp["Provinsi"].GetString());
        m_provinsiHasBeenSet = true;
    }

    if (rsp.HasMember("Kota") && !rsp["Kota"].IsNull())
    {
        if (!rsp["Kota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Kota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kota = string(rsp["Kota"].GetString());
        m_kotaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeIndonesiaIDCardOCRResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_nIKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NIK";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nIK.c_str(), allocator).Move(), allocator);
    }

    if (m_namaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nama";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nama.c_str(), allocator).Move(), allocator);
    }

    if (m_tempatTglLahirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TempatTglLahir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tempatTglLahir.c_str(), allocator).Move(), allocator);
    }

    if (m_jenisKelaminHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JenisKelamin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jenisKelamin.c_str(), allocator).Move(), allocator);
    }

    if (m_golDarahHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GolDarah";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_golDarah.c_str(), allocator).Move(), allocator);
    }

    if (m_alamatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alamat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alamat.c_str(), allocator).Move(), allocator);
    }

    if (m_rTRWHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTRW";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rTRW.c_str(), allocator).Move(), allocator);
    }

    if (m_kelDesaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KelDesa";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kelDesa.c_str(), allocator).Move(), allocator);
    }

    if (m_kecamatanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kecamatan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kecamatan.c_str(), allocator).Move(), allocator);
    }

    if (m_agamaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agama";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_agama.c_str(), allocator).Move(), allocator);
    }

    if (m_statusPerkawinanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusPerkawinan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusPerkawinan.c_str(), allocator).Move(), allocator);
    }

    if (m_perkerjaanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Perkerjaan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_perkerjaan.c_str(), allocator).Move(), allocator);
    }

    if (m_kewargaNegaraanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KewargaNegaraan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kewargaNegaraan.c_str(), allocator).Move(), allocator);
    }

    if (m_berlakuHinggaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BerlakuHingga";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_berlakuHingga.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

    if (m_photoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Photo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photo.c_str(), allocator).Move(), allocator);
    }

    if (m_provinsiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provinsi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provinsi.c_str(), allocator).Move(), allocator);
    }

    if (m_kotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kota.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string RecognizeIndonesiaIDCardOCRResponse::GetNIK() const
{
    return m_nIK;
}

bool RecognizeIndonesiaIDCardOCRResponse::NIKHasBeenSet() const
{
    return m_nIKHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetNama() const
{
    return m_nama;
}

bool RecognizeIndonesiaIDCardOCRResponse::NamaHasBeenSet() const
{
    return m_namaHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetTempatTglLahir() const
{
    return m_tempatTglLahir;
}

bool RecognizeIndonesiaIDCardOCRResponse::TempatTglLahirHasBeenSet() const
{
    return m_tempatTglLahirHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetJenisKelamin() const
{
    return m_jenisKelamin;
}

bool RecognizeIndonesiaIDCardOCRResponse::JenisKelaminHasBeenSet() const
{
    return m_jenisKelaminHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetGolDarah() const
{
    return m_golDarah;
}

bool RecognizeIndonesiaIDCardOCRResponse::GolDarahHasBeenSet() const
{
    return m_golDarahHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetAlamat() const
{
    return m_alamat;
}

bool RecognizeIndonesiaIDCardOCRResponse::AlamatHasBeenSet() const
{
    return m_alamatHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetRTRW() const
{
    return m_rTRW;
}

bool RecognizeIndonesiaIDCardOCRResponse::RTRWHasBeenSet() const
{
    return m_rTRWHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetKelDesa() const
{
    return m_kelDesa;
}

bool RecognizeIndonesiaIDCardOCRResponse::KelDesaHasBeenSet() const
{
    return m_kelDesaHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetKecamatan() const
{
    return m_kecamatan;
}

bool RecognizeIndonesiaIDCardOCRResponse::KecamatanHasBeenSet() const
{
    return m_kecamatanHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetAgama() const
{
    return m_agama;
}

bool RecognizeIndonesiaIDCardOCRResponse::AgamaHasBeenSet() const
{
    return m_agamaHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetStatusPerkawinan() const
{
    return m_statusPerkawinan;
}

bool RecognizeIndonesiaIDCardOCRResponse::StatusPerkawinanHasBeenSet() const
{
    return m_statusPerkawinanHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetPerkerjaan() const
{
    return m_perkerjaan;
}

bool RecognizeIndonesiaIDCardOCRResponse::PerkerjaanHasBeenSet() const
{
    return m_perkerjaanHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetKewargaNegaraan() const
{
    return m_kewargaNegaraan;
}

bool RecognizeIndonesiaIDCardOCRResponse::KewargaNegaraanHasBeenSet() const
{
    return m_kewargaNegaraanHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetBerlakuHingga() const
{
    return m_berlakuHingga;
}

bool RecognizeIndonesiaIDCardOCRResponse::BerlakuHinggaHasBeenSet() const
{
    return m_berlakuHinggaHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetIssuedDate() const
{
    return m_issuedDate;
}

bool RecognizeIndonesiaIDCardOCRResponse::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetPhoto() const
{
    return m_photo;
}

bool RecognizeIndonesiaIDCardOCRResponse::PhotoHasBeenSet() const
{
    return m_photoHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetProvinsi() const
{
    return m_provinsi;
}

bool RecognizeIndonesiaIDCardOCRResponse::ProvinsiHasBeenSet() const
{
    return m_provinsiHasBeenSet;
}

string RecognizeIndonesiaIDCardOCRResponse::GetKota() const
{
    return m_kota;
}

bool RecognizeIndonesiaIDCardOCRResponse::KotaHasBeenSet() const
{
    return m_kotaHasBeenSet;
}


