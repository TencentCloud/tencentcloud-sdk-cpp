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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeIndonesiaIDCardOCR返回参数结构体
                */
                class RecognizeIndonesiaIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeIndonesiaIDCardOCRResponse();
                    ~RecognizeIndonesiaIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取证件号码
                     * @return NIK 证件号码
                     */
                    std::string GetNIK() const;

                    /**
                     * 判断参数 NIK 是否已赋值
                     * @return NIK 是否已赋值
                     */
                    bool NIKHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Nama 姓名
                     */
                    std::string GetNama() const;

                    /**
                     * 判断参数 Nama 是否已赋值
                     * @return Nama 是否已赋值
                     */
                    bool NamaHasBeenSet() const;

                    /**
                     * 获取出生地/出生时间
                     * @return TempatTglLahir 出生地/出生时间
                     */
                    std::string GetTempatTglLahir() const;

                    /**
                     * 判断参数 TempatTglLahir 是否已赋值
                     * @return TempatTglLahir 是否已赋值
                     */
                    bool TempatTglLahirHasBeenSet() const;

                    /**
                     * 获取性别
                     * @return JenisKelamin 性别
                     */
                    std::string GetJenisKelamin() const;

                    /**
                     * 判断参数 JenisKelamin 是否已赋值
                     * @return JenisKelamin 是否已赋值
                     */
                    bool JenisKelaminHasBeenSet() const;

                    /**
                     * 获取血型
                     * @return GolDarah 血型
                     */
                    std::string GetGolDarah() const;

                    /**
                     * 判断参数 GolDarah 是否已赋值
                     * @return GolDarah 是否已赋值
                     */
                    bool GolDarahHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return Alamat 地址
                     */
                    std::string GetAlamat() const;

                    /**
                     * 判断参数 Alamat 是否已赋值
                     * @return Alamat 是否已赋值
                     */
                    bool AlamatHasBeenSet() const;

                    /**
                     * 获取街道
                     * @return RTRW 街道
                     */
                    std::string GetRTRW() const;

                    /**
                     * 判断参数 RTRW 是否已赋值
                     * @return RTRW 是否已赋值
                     */
                    bool RTRWHasBeenSet() const;

                    /**
                     * 获取村
                     * @return KelDesa 村
                     */
                    std::string GetKelDesa() const;

                    /**
                     * 判断参数 KelDesa 是否已赋值
                     * @return KelDesa 是否已赋值
                     */
                    bool KelDesaHasBeenSet() const;

                    /**
                     * 获取地区
                     * @return Kecamatan 地区
                     */
                    std::string GetKecamatan() const;

                    /**
                     * 判断参数 Kecamatan 是否已赋值
                     * @return Kecamatan 是否已赋值
                     */
                    bool KecamatanHasBeenSet() const;

                    /**
                     * 获取宗教信仰
                     * @return Agama 宗教信仰
                     */
                    std::string GetAgama() const;

                    /**
                     * 判断参数 Agama 是否已赋值
                     * @return Agama 是否已赋值
                     */
                    bool AgamaHasBeenSet() const;

                    /**
                     * 获取婚姻状况
                     * @return StatusPerkawinan 婚姻状况
                     */
                    std::string GetStatusPerkawinan() const;

                    /**
                     * 判断参数 StatusPerkawinan 是否已赋值
                     * @return StatusPerkawinan 是否已赋值
                     */
                    bool StatusPerkawinanHasBeenSet() const;

                    /**
                     * 获取职业
                     * @return Perkerjaan 职业
                     */
                    std::string GetPerkerjaan() const;

                    /**
                     * 判断参数 Perkerjaan 是否已赋值
                     * @return Perkerjaan 是否已赋值
                     */
                    bool PerkerjaanHasBeenSet() const;

                    /**
                     * 获取国籍
                     * @return KewargaNegaraan 国籍
                     */
                    std::string GetKewargaNegaraan() const;

                    /**
                     * 判断参数 KewargaNegaraan 是否已赋值
                     * @return KewargaNegaraan 是否已赋值
                     */
                    bool KewargaNegaraanHasBeenSet() const;

                    /**
                     * 获取身份证有效期限
                     * @return BerlakuHingga 身份证有效期限
                     */
                    std::string GetBerlakuHingga() const;

                    /**
                     * 判断参数 BerlakuHingga 是否已赋值
                     * @return BerlakuHingga 是否已赋值
                     */
                    bool BerlakuHinggaHasBeenSet() const;

                    /**
                     * 获取发证日期
                     * @return IssuedDate 发证日期
                     */
                    std::string GetIssuedDate() const;

                    /**
                     * 判断参数 IssuedDate 是否已赋值
                     * @return IssuedDate 是否已赋值
                     */
                    bool IssuedDateHasBeenSet() const;

                    /**
                     * 获取人像截图
                     * @return Photo 人像截图
                     */
                    std::string GetPhoto() const;

                    /**
                     * 判断参数 Photo 是否已赋值
                     * @return Photo 是否已赋值
                     */
                    bool PhotoHasBeenSet() const;

                    /**
                     * 获取省份，Scene为V2时支持识别
                     * @return Provinsi 省份，Scene为V2时支持识别
                     */
                    std::string GetProvinsi() const;

                    /**
                     * 判断参数 Provinsi 是否已赋值
                     * @return Provinsi 是否已赋值
                     */
                    bool ProvinsiHasBeenSet() const;

                    /**
                     * 获取城市，Scene为V2时支持识别
                     * @return Kota 城市，Scene为V2时支持识别
                     */
                    std::string GetKota() const;

                    /**
                     * 判断参数 Kota 是否已赋值
                     * @return Kota 是否已赋值
                     */
                    bool KotaHasBeenSet() const;

                private:

                    /**
                     * 证件号码
                     */
                    std::string m_nIK;
                    bool m_nIKHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_nama;
                    bool m_namaHasBeenSet;

                    /**
                     * 出生地/出生时间
                     */
                    std::string m_tempatTglLahir;
                    bool m_tempatTglLahirHasBeenSet;

                    /**
                     * 性别
                     */
                    std::string m_jenisKelamin;
                    bool m_jenisKelaminHasBeenSet;

                    /**
                     * 血型
                     */
                    std::string m_golDarah;
                    bool m_golDarahHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_alamat;
                    bool m_alamatHasBeenSet;

                    /**
                     * 街道
                     */
                    std::string m_rTRW;
                    bool m_rTRWHasBeenSet;

                    /**
                     * 村
                     */
                    std::string m_kelDesa;
                    bool m_kelDesaHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_kecamatan;
                    bool m_kecamatanHasBeenSet;

                    /**
                     * 宗教信仰
                     */
                    std::string m_agama;
                    bool m_agamaHasBeenSet;

                    /**
                     * 婚姻状况
                     */
                    std::string m_statusPerkawinan;
                    bool m_statusPerkawinanHasBeenSet;

                    /**
                     * 职业
                     */
                    std::string m_perkerjaan;
                    bool m_perkerjaanHasBeenSet;

                    /**
                     * 国籍
                     */
                    std::string m_kewargaNegaraan;
                    bool m_kewargaNegaraanHasBeenSet;

                    /**
                     * 身份证有效期限
                     */
                    std::string m_berlakuHingga;
                    bool m_berlakuHinggaHasBeenSet;

                    /**
                     * 发证日期
                     */
                    std::string m_issuedDate;
                    bool m_issuedDateHasBeenSet;

                    /**
                     * 人像截图
                     */
                    std::string m_photo;
                    bool m_photoHasBeenSet;

                    /**
                     * 省份，Scene为V2时支持识别
                     */
                    std::string m_provinsi;
                    bool m_provinsiHasBeenSet;

                    /**
                     * 城市，Scene为V2时支持识别
                     */
                    std::string m_kota;
                    bool m_kotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEINDONESIAIDCARDOCRRESPONSE_H_
