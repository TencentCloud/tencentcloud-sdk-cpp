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

#include <tencentcloud/mrs/v20200910/model/EcgDescription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

EcgDescription::EcgDescription() :
    m_heartRateHasBeenSet(false),
    m_auricularRateHasBeenSet(false),
    m_ventricularRateHasBeenSet(false),
    m_rhythmHasBeenSet(false),
    m_pDurationHasBeenSet(false),
    m_qrsDurationHasBeenSet(false),
    m_qrsAxisHasBeenSet(false),
    m_pRIntervalHasBeenSet(false),
    m_pPIntervalHasBeenSet(false),
    m_rRIntervalHasBeenSet(false),
    m_pJIntervalHasBeenSet(false),
    m_qTIntervalHasBeenSet(false),
    m_qTCIntervalHasBeenSet(false),
    m_rv5SV1AmplitudeHasBeenSet(false),
    m_rv5AddSV1AmplitudeHasBeenSet(false),
    m_pRTAxisHasBeenSet(false),
    m_rv5AmplitudeHasBeenSet(false),
    m_sV1AmplitudeHasBeenSet(false),
    m_rV6SV2HasBeenSet(false),
    m_pQRSTAxisHasBeenSet(false)
{
}

CoreInternalOutcome EcgDescription::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeartRate") && !value["HeartRate"].IsNull())
    {
        if (!value["HeartRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.HeartRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_heartRate.Deserialize(value["HeartRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_heartRateHasBeenSet = true;
    }

    if (value.HasMember("AuricularRate") && !value["AuricularRate"].IsNull())
    {
        if (!value["AuricularRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.AuricularRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auricularRate.Deserialize(value["AuricularRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auricularRateHasBeenSet = true;
    }

    if (value.HasMember("VentricularRate") && !value["VentricularRate"].IsNull())
    {
        if (!value["VentricularRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.VentricularRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ventricularRate.Deserialize(value["VentricularRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ventricularRateHasBeenSet = true;
    }

    if (value.HasMember("Rhythm") && !value["Rhythm"].IsNull())
    {
        if (!value["Rhythm"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.Rhythm` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rhythm.Deserialize(value["Rhythm"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rhythmHasBeenSet = true;
    }

    if (value.HasMember("PDuration") && !value["PDuration"].IsNull())
    {
        if (!value["PDuration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PDuration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pDuration.Deserialize(value["PDuration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pDurationHasBeenSet = true;
    }

    if (value.HasMember("QrsDuration") && !value["QrsDuration"].IsNull())
    {
        if (!value["QrsDuration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.QrsDuration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qrsDuration.Deserialize(value["QrsDuration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qrsDurationHasBeenSet = true;
    }

    if (value.HasMember("QrsAxis") && !value["QrsAxis"].IsNull())
    {
        if (!value["QrsAxis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.QrsAxis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qrsAxis.Deserialize(value["QrsAxis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qrsAxisHasBeenSet = true;
    }

    if (value.HasMember("PRInterval") && !value["PRInterval"].IsNull())
    {
        if (!value["PRInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PRInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pRInterval.Deserialize(value["PRInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pRIntervalHasBeenSet = true;
    }

    if (value.HasMember("PPInterval") && !value["PPInterval"].IsNull())
    {
        if (!value["PPInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PPInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pPInterval.Deserialize(value["PPInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pPIntervalHasBeenSet = true;
    }

    if (value.HasMember("RRInterval") && !value["RRInterval"].IsNull())
    {
        if (!value["RRInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.RRInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rRInterval.Deserialize(value["RRInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rRIntervalHasBeenSet = true;
    }

    if (value.HasMember("PJInterval") && !value["PJInterval"].IsNull())
    {
        if (!value["PJInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PJInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pJInterval.Deserialize(value["PJInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pJIntervalHasBeenSet = true;
    }

    if (value.HasMember("QTInterval") && !value["QTInterval"].IsNull())
    {
        if (!value["QTInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.QTInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qTInterval.Deserialize(value["QTInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qTIntervalHasBeenSet = true;
    }

    if (value.HasMember("QTCInterval") && !value["QTCInterval"].IsNull())
    {
        if (!value["QTCInterval"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.QTCInterval` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qTCInterval.Deserialize(value["QTCInterval"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qTCIntervalHasBeenSet = true;
    }

    if (value.HasMember("Rv5SV1Amplitude") && !value["Rv5SV1Amplitude"].IsNull())
    {
        if (!value["Rv5SV1Amplitude"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.Rv5SV1Amplitude` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rv5SV1Amplitude.Deserialize(value["Rv5SV1Amplitude"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rv5SV1AmplitudeHasBeenSet = true;
    }

    if (value.HasMember("Rv5AddSV1Amplitude") && !value["Rv5AddSV1Amplitude"].IsNull())
    {
        if (!value["Rv5AddSV1Amplitude"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.Rv5AddSV1Amplitude` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rv5AddSV1Amplitude.Deserialize(value["Rv5AddSV1Amplitude"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rv5AddSV1AmplitudeHasBeenSet = true;
    }

    if (value.HasMember("PRTAxis") && !value["PRTAxis"].IsNull())
    {
        if (!value["PRTAxis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PRTAxis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pRTAxis.Deserialize(value["PRTAxis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pRTAxisHasBeenSet = true;
    }

    if (value.HasMember("Rv5Amplitude") && !value["Rv5Amplitude"].IsNull())
    {
        if (!value["Rv5Amplitude"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.Rv5Amplitude` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rv5Amplitude.Deserialize(value["Rv5Amplitude"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rv5AmplitudeHasBeenSet = true;
    }

    if (value.HasMember("SV1Amplitude") && !value["SV1Amplitude"].IsNull())
    {
        if (!value["SV1Amplitude"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.SV1Amplitude` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sV1Amplitude.Deserialize(value["SV1Amplitude"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sV1AmplitudeHasBeenSet = true;
    }

    if (value.HasMember("RV6SV2") && !value["RV6SV2"].IsNull())
    {
        if (!value["RV6SV2"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.RV6SV2` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rV6SV2.Deserialize(value["RV6SV2"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rV6SV2HasBeenSet = true;
    }

    if (value.HasMember("PQRSTAxis") && !value["PQRSTAxis"].IsNull())
    {
        if (!value["PQRSTAxis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `EcgDescription.PQRSTAxis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pQRSTAxis.Deserialize(value["PQRSTAxis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pQRSTAxisHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EcgDescription::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_heartRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeartRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_heartRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_auricularRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuricularRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auricularRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ventricularRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VentricularRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ventricularRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rhythmHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rhythm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rhythm.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pDuration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qrsDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrsDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qrsDuration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qrsAxisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrsAxis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qrsAxis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pRIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PRInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pRInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pPIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PPInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pPInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rRIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RRInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rRInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pJIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PJInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pJInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qTIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QTInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qTInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qTCIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QTCInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qTCInterval.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rv5SV1AmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rv5SV1Amplitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rv5SV1Amplitude.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rv5AddSV1AmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rv5AddSV1Amplitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rv5AddSV1Amplitude.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pRTAxisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PRTAxis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pRTAxis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rv5AmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rv5Amplitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rv5Amplitude.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sV1AmplitudeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SV1Amplitude";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sV1Amplitude.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rV6SV2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RV6SV2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rV6SV2.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pQRSTAxisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PQRSTAxis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pQRSTAxis.ToJsonObject(value[key.c_str()], allocator);
    }

}


EcgItem EcgDescription::GetHeartRate() const
{
    return m_heartRate;
}

void EcgDescription::SetHeartRate(const EcgItem& _heartRate)
{
    m_heartRate = _heartRate;
    m_heartRateHasBeenSet = true;
}

bool EcgDescription::HeartRateHasBeenSet() const
{
    return m_heartRateHasBeenSet;
}

EcgItem EcgDescription::GetAuricularRate() const
{
    return m_auricularRate;
}

void EcgDescription::SetAuricularRate(const EcgItem& _auricularRate)
{
    m_auricularRate = _auricularRate;
    m_auricularRateHasBeenSet = true;
}

bool EcgDescription::AuricularRateHasBeenSet() const
{
    return m_auricularRateHasBeenSet;
}

EcgItem EcgDescription::GetVentricularRate() const
{
    return m_ventricularRate;
}

void EcgDescription::SetVentricularRate(const EcgItem& _ventricularRate)
{
    m_ventricularRate = _ventricularRate;
    m_ventricularRateHasBeenSet = true;
}

bool EcgDescription::VentricularRateHasBeenSet() const
{
    return m_ventricularRateHasBeenSet;
}

EcgItem EcgDescription::GetRhythm() const
{
    return m_rhythm;
}

void EcgDescription::SetRhythm(const EcgItem& _rhythm)
{
    m_rhythm = _rhythm;
    m_rhythmHasBeenSet = true;
}

bool EcgDescription::RhythmHasBeenSet() const
{
    return m_rhythmHasBeenSet;
}

EcgItem EcgDescription::GetPDuration() const
{
    return m_pDuration;
}

void EcgDescription::SetPDuration(const EcgItem& _pDuration)
{
    m_pDuration = _pDuration;
    m_pDurationHasBeenSet = true;
}

bool EcgDescription::PDurationHasBeenSet() const
{
    return m_pDurationHasBeenSet;
}

EcgItem EcgDescription::GetQrsDuration() const
{
    return m_qrsDuration;
}

void EcgDescription::SetQrsDuration(const EcgItem& _qrsDuration)
{
    m_qrsDuration = _qrsDuration;
    m_qrsDurationHasBeenSet = true;
}

bool EcgDescription::QrsDurationHasBeenSet() const
{
    return m_qrsDurationHasBeenSet;
}

EcgItem EcgDescription::GetQrsAxis() const
{
    return m_qrsAxis;
}

void EcgDescription::SetQrsAxis(const EcgItem& _qrsAxis)
{
    m_qrsAxis = _qrsAxis;
    m_qrsAxisHasBeenSet = true;
}

bool EcgDescription::QrsAxisHasBeenSet() const
{
    return m_qrsAxisHasBeenSet;
}

EcgItem EcgDescription::GetPRInterval() const
{
    return m_pRInterval;
}

void EcgDescription::SetPRInterval(const EcgItem& _pRInterval)
{
    m_pRInterval = _pRInterval;
    m_pRIntervalHasBeenSet = true;
}

bool EcgDescription::PRIntervalHasBeenSet() const
{
    return m_pRIntervalHasBeenSet;
}

EcgItem EcgDescription::GetPPInterval() const
{
    return m_pPInterval;
}

void EcgDescription::SetPPInterval(const EcgItem& _pPInterval)
{
    m_pPInterval = _pPInterval;
    m_pPIntervalHasBeenSet = true;
}

bool EcgDescription::PPIntervalHasBeenSet() const
{
    return m_pPIntervalHasBeenSet;
}

EcgItem EcgDescription::GetRRInterval() const
{
    return m_rRInterval;
}

void EcgDescription::SetRRInterval(const EcgItem& _rRInterval)
{
    m_rRInterval = _rRInterval;
    m_rRIntervalHasBeenSet = true;
}

bool EcgDescription::RRIntervalHasBeenSet() const
{
    return m_rRIntervalHasBeenSet;
}

EcgItem EcgDescription::GetPJInterval() const
{
    return m_pJInterval;
}

void EcgDescription::SetPJInterval(const EcgItem& _pJInterval)
{
    m_pJInterval = _pJInterval;
    m_pJIntervalHasBeenSet = true;
}

bool EcgDescription::PJIntervalHasBeenSet() const
{
    return m_pJIntervalHasBeenSet;
}

EcgItem EcgDescription::GetQTInterval() const
{
    return m_qTInterval;
}

void EcgDescription::SetQTInterval(const EcgItem& _qTInterval)
{
    m_qTInterval = _qTInterval;
    m_qTIntervalHasBeenSet = true;
}

bool EcgDescription::QTIntervalHasBeenSet() const
{
    return m_qTIntervalHasBeenSet;
}

EcgItem EcgDescription::GetQTCInterval() const
{
    return m_qTCInterval;
}

void EcgDescription::SetQTCInterval(const EcgItem& _qTCInterval)
{
    m_qTCInterval = _qTCInterval;
    m_qTCIntervalHasBeenSet = true;
}

bool EcgDescription::QTCIntervalHasBeenSet() const
{
    return m_qTCIntervalHasBeenSet;
}

EcgItem EcgDescription::GetRv5SV1Amplitude() const
{
    return m_rv5SV1Amplitude;
}

void EcgDescription::SetRv5SV1Amplitude(const EcgItem& _rv5SV1Amplitude)
{
    m_rv5SV1Amplitude = _rv5SV1Amplitude;
    m_rv5SV1AmplitudeHasBeenSet = true;
}

bool EcgDescription::Rv5SV1AmplitudeHasBeenSet() const
{
    return m_rv5SV1AmplitudeHasBeenSet;
}

EcgItem EcgDescription::GetRv5AddSV1Amplitude() const
{
    return m_rv5AddSV1Amplitude;
}

void EcgDescription::SetRv5AddSV1Amplitude(const EcgItem& _rv5AddSV1Amplitude)
{
    m_rv5AddSV1Amplitude = _rv5AddSV1Amplitude;
    m_rv5AddSV1AmplitudeHasBeenSet = true;
}

bool EcgDescription::Rv5AddSV1AmplitudeHasBeenSet() const
{
    return m_rv5AddSV1AmplitudeHasBeenSet;
}

EcgItem EcgDescription::GetPRTAxis() const
{
    return m_pRTAxis;
}

void EcgDescription::SetPRTAxis(const EcgItem& _pRTAxis)
{
    m_pRTAxis = _pRTAxis;
    m_pRTAxisHasBeenSet = true;
}

bool EcgDescription::PRTAxisHasBeenSet() const
{
    return m_pRTAxisHasBeenSet;
}

EcgItem EcgDescription::GetRv5Amplitude() const
{
    return m_rv5Amplitude;
}

void EcgDescription::SetRv5Amplitude(const EcgItem& _rv5Amplitude)
{
    m_rv5Amplitude = _rv5Amplitude;
    m_rv5AmplitudeHasBeenSet = true;
}

bool EcgDescription::Rv5AmplitudeHasBeenSet() const
{
    return m_rv5AmplitudeHasBeenSet;
}

EcgItem EcgDescription::GetSV1Amplitude() const
{
    return m_sV1Amplitude;
}

void EcgDescription::SetSV1Amplitude(const EcgItem& _sV1Amplitude)
{
    m_sV1Amplitude = _sV1Amplitude;
    m_sV1AmplitudeHasBeenSet = true;
}

bool EcgDescription::SV1AmplitudeHasBeenSet() const
{
    return m_sV1AmplitudeHasBeenSet;
}

EcgItem EcgDescription::GetRV6SV2() const
{
    return m_rV6SV2;
}

void EcgDescription::SetRV6SV2(const EcgItem& _rV6SV2)
{
    m_rV6SV2 = _rV6SV2;
    m_rV6SV2HasBeenSet = true;
}

bool EcgDescription::RV6SV2HasBeenSet() const
{
    return m_rV6SV2HasBeenSet;
}

EcgItem EcgDescription::GetPQRSTAxis() const
{
    return m_pQRSTAxis;
}

void EcgDescription::SetPQRSTAxis(const EcgItem& _pQRSTAxis)
{
    m_pQRSTAxis = _pQRSTAxis;
    m_pQRSTAxisHasBeenSet = true;
}

bool EcgDescription::PQRSTAxisHasBeenSet() const
{
    return m_pQRSTAxisHasBeenSet;
}

