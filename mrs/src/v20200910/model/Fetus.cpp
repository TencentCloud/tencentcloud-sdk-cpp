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

#include <tencentcloud/mrs/v20200910/model/Fetus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

Fetus::Fetus() :
    m_bPDHasBeenSet(false),
    m_aPTDHasBeenSet(false),
    m_tTDHasBeenSet(false),
    m_cRLHasBeenSet(false),
    m_hCHasBeenSet(false),
    m_aCHasBeenSet(false),
    m_fLHasBeenSet(false),
    m_hLHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_nTHasBeenSet(false),
    m_umbilicalCordHasBeenSet(false),
    m_waterDeepHasBeenSet(false),
    m_waterQuadHasBeenSet(false),
    m_aFIHasBeenSet(false),
    m_fHRHasBeenSet(false),
    m_movementHasBeenSet(false),
    m_numHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_aliveHasBeenSet(false),
    m_placentaLocationHasBeenSet(false),
    m_placentaThicknessHasBeenSet(false),
    m_placentaGradeHasBeenSet(false),
    m_gestationTimeHasBeenSet(false),
    m_gestationPeriodHasBeenSet(false),
    m_aroundNeckHasBeenSet(false),
    m_symHasBeenSet(false),
    m_srcHasBeenSet(false)
{
}

CoreInternalOutcome Fetus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BPD") && !value["BPD"].IsNull())
    {
        if (!value["BPD"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.BPD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bPD.Deserialize(value["BPD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bPDHasBeenSet = true;
    }

    if (value.HasMember("APTD") && !value["APTD"].IsNull())
    {
        if (!value["APTD"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.APTD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aPTD.Deserialize(value["APTD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aPTDHasBeenSet = true;
    }

    if (value.HasMember("TTD") && !value["TTD"].IsNull())
    {
        if (!value["TTD"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.TTD` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tTD.Deserialize(value["TTD"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tTDHasBeenSet = true;
    }

    if (value.HasMember("CRL") && !value["CRL"].IsNull())
    {
        if (!value["CRL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.CRL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cRL.Deserialize(value["CRL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cRLHasBeenSet = true;
    }

    if (value.HasMember("HC") && !value["HC"].IsNull())
    {
        if (!value["HC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.HC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hC.Deserialize(value["HC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hCHasBeenSet = true;
    }

    if (value.HasMember("AC") && !value["AC"].IsNull())
    {
        if (!value["AC"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.AC` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aC.Deserialize(value["AC"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aCHasBeenSet = true;
    }

    if (value.HasMember("FL") && !value["FL"].IsNull())
    {
        if (!value["FL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.FL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fL.Deserialize(value["FL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fLHasBeenSet = true;
    }

    if (value.HasMember("HL") && !value["HL"].IsNull())
    {
        if (!value["HL"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.HL` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hL.Deserialize(value["HL"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hLHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Weight` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_weight.Deserialize(value["Weight"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_weightHasBeenSet = true;
    }

    if (value.HasMember("NT") && !value["NT"].IsNull())
    {
        if (!value["NT"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.NT` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nT.Deserialize(value["NT"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nTHasBeenSet = true;
    }

    if (value.HasMember("UmbilicalCord") && !value["UmbilicalCord"].IsNull())
    {
        if (!value["UmbilicalCord"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.UmbilicalCord` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_umbilicalCord.Deserialize(value["UmbilicalCord"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_umbilicalCordHasBeenSet = true;
    }

    if (value.HasMember("WaterDeep") && !value["WaterDeep"].IsNull())
    {
        if (!value["WaterDeep"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.WaterDeep` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterDeep.Deserialize(value["WaterDeep"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterDeepHasBeenSet = true;
    }

    if (value.HasMember("WaterQuad") && !value["WaterQuad"].IsNull())
    {
        if (!value["WaterQuad"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.WaterQuad` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_waterQuad.Deserialize(value["WaterQuad"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_waterQuadHasBeenSet = true;
    }

    if (value.HasMember("AFI") && !value["AFI"].IsNull())
    {
        if (!value["AFI"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.AFI` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aFI.Deserialize(value["AFI"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aFIHasBeenSet = true;
    }

    if (value.HasMember("FHR") && !value["FHR"].IsNull())
    {
        if (!value["FHR"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.FHR` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fHR.Deserialize(value["FHR"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fHRHasBeenSet = true;
    }

    if (value.HasMember("Movement") && !value["Movement"].IsNull())
    {
        if (!value["Movement"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Movement` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_movement.Deserialize(value["Movement"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_movementHasBeenSet = true;
    }

    if (value.HasMember("Num") && !value["Num"].IsNull())
    {
        if (!value["Num"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Num` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_num.Deserialize(value["Num"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_numHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Position` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_position.Deserialize(value["Position"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_positionHasBeenSet = true;
    }

    if (value.HasMember("Alive") && !value["Alive"].IsNull())
    {
        if (!value["Alive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Alive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alive.Deserialize(value["Alive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aliveHasBeenSet = true;
    }

    if (value.HasMember("PlacentaLocation") && !value["PlacentaLocation"].IsNull())
    {
        if (!value["PlacentaLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.PlacentaLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placentaLocation.Deserialize(value["PlacentaLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placentaLocationHasBeenSet = true;
    }

    if (value.HasMember("PlacentaThickness") && !value["PlacentaThickness"].IsNull())
    {
        if (!value["PlacentaThickness"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.PlacentaThickness` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placentaThickness.Deserialize(value["PlacentaThickness"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placentaThicknessHasBeenSet = true;
    }

    if (value.HasMember("PlacentaGrade") && !value["PlacentaGrade"].IsNull())
    {
        if (!value["PlacentaGrade"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.PlacentaGrade` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_placentaGrade.Deserialize(value["PlacentaGrade"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_placentaGradeHasBeenSet = true;
    }

    if (value.HasMember("GestationTime") && !value["GestationTime"].IsNull())
    {
        if (!value["GestationTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.GestationTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gestationTime.Deserialize(value["GestationTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gestationTimeHasBeenSet = true;
    }

    if (value.HasMember("GestationPeriod") && !value["GestationPeriod"].IsNull())
    {
        if (!value["GestationPeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.GestationPeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_gestationPeriod.Deserialize(value["GestationPeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_gestationPeriodHasBeenSet = true;
    }

    if (value.HasMember("AroundNeck") && !value["AroundNeck"].IsNull())
    {
        if (!value["AroundNeck"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.AroundNeck` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aroundNeck.Deserialize(value["AroundNeck"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aroundNeckHasBeenSet = true;
    }

    if (value.HasMember("Sym") && !value["Sym"].IsNull())
    {
        if (!value["Sym"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Fetus.Sym` is not array type"));

        const rapidjson::Value &tmpValue = value["Sym"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sym.push_back(item);
        }
        m_symHasBeenSet = true;
    }

    if (value.HasMember("Src") && !value["Src"].IsNull())
    {
        if (!value["Src"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Fetus.Src` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_src = string(value["Src"].GetString());
        m_srcHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Fetus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bPDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BPD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bPD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aPTDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APTD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aPTD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tTDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TTD";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tTD.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cRLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CRL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cRL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aCHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AC";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aC.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hL.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_weight.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nT.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_umbilicalCordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UmbilicalCord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_umbilicalCord.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waterDeepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterDeep";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterDeep.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_waterQuadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaterQuad";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_waterQuad.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aFIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AFI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aFI.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fHRHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FHR";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fHR.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_movementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Movement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_movement.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_numHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Num";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_num.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_position.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alive.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placentaLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacentaLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placentaLocation.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placentaThicknessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacentaThickness";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placentaThickness.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_placentaGradeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlacentaGrade";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_placentaGrade.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gestationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GestationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gestationTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_gestationPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GestationPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gestationPeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aroundNeckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AroundNeck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aroundNeck.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_symHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sym";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sym.begin(); itr != m_sym.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Src";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_src.c_str(), allocator).Move(), allocator);
    }

}


FieldInfo Fetus::GetBPD() const
{
    return m_bPD;
}

void Fetus::SetBPD(const FieldInfo& _bPD)
{
    m_bPD = _bPD;
    m_bPDHasBeenSet = true;
}

bool Fetus::BPDHasBeenSet() const
{
    return m_bPDHasBeenSet;
}

FieldInfo Fetus::GetAPTD() const
{
    return m_aPTD;
}

void Fetus::SetAPTD(const FieldInfo& _aPTD)
{
    m_aPTD = _aPTD;
    m_aPTDHasBeenSet = true;
}

bool Fetus::APTDHasBeenSet() const
{
    return m_aPTDHasBeenSet;
}

FieldInfo Fetus::GetTTD() const
{
    return m_tTD;
}

void Fetus::SetTTD(const FieldInfo& _tTD)
{
    m_tTD = _tTD;
    m_tTDHasBeenSet = true;
}

bool Fetus::TTDHasBeenSet() const
{
    return m_tTDHasBeenSet;
}

FieldInfo Fetus::GetCRL() const
{
    return m_cRL;
}

void Fetus::SetCRL(const FieldInfo& _cRL)
{
    m_cRL = _cRL;
    m_cRLHasBeenSet = true;
}

bool Fetus::CRLHasBeenSet() const
{
    return m_cRLHasBeenSet;
}

FieldInfo Fetus::GetHC() const
{
    return m_hC;
}

void Fetus::SetHC(const FieldInfo& _hC)
{
    m_hC = _hC;
    m_hCHasBeenSet = true;
}

bool Fetus::HCHasBeenSet() const
{
    return m_hCHasBeenSet;
}

FieldInfo Fetus::GetAC() const
{
    return m_aC;
}

void Fetus::SetAC(const FieldInfo& _aC)
{
    m_aC = _aC;
    m_aCHasBeenSet = true;
}

bool Fetus::ACHasBeenSet() const
{
    return m_aCHasBeenSet;
}

FieldInfo Fetus::GetFL() const
{
    return m_fL;
}

void Fetus::SetFL(const FieldInfo& _fL)
{
    m_fL = _fL;
    m_fLHasBeenSet = true;
}

bool Fetus::FLHasBeenSet() const
{
    return m_fLHasBeenSet;
}

FieldInfo Fetus::GetHL() const
{
    return m_hL;
}

void Fetus::SetHL(const FieldInfo& _hL)
{
    m_hL = _hL;
    m_hLHasBeenSet = true;
}

bool Fetus::HLHasBeenSet() const
{
    return m_hLHasBeenSet;
}

FieldInfo Fetus::GetWeight() const
{
    return m_weight;
}

void Fetus::SetWeight(const FieldInfo& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool Fetus::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

FieldInfo Fetus::GetNT() const
{
    return m_nT;
}

void Fetus::SetNT(const FieldInfo& _nT)
{
    m_nT = _nT;
    m_nTHasBeenSet = true;
}

bool Fetus::NTHasBeenSet() const
{
    return m_nTHasBeenSet;
}

FieldInfo Fetus::GetUmbilicalCord() const
{
    return m_umbilicalCord;
}

void Fetus::SetUmbilicalCord(const FieldInfo& _umbilicalCord)
{
    m_umbilicalCord = _umbilicalCord;
    m_umbilicalCordHasBeenSet = true;
}

bool Fetus::UmbilicalCordHasBeenSet() const
{
    return m_umbilicalCordHasBeenSet;
}

FieldInfo Fetus::GetWaterDeep() const
{
    return m_waterDeep;
}

void Fetus::SetWaterDeep(const FieldInfo& _waterDeep)
{
    m_waterDeep = _waterDeep;
    m_waterDeepHasBeenSet = true;
}

bool Fetus::WaterDeepHasBeenSet() const
{
    return m_waterDeepHasBeenSet;
}

FieldInfo Fetus::GetWaterQuad() const
{
    return m_waterQuad;
}

void Fetus::SetWaterQuad(const FieldInfo& _waterQuad)
{
    m_waterQuad = _waterQuad;
    m_waterQuadHasBeenSet = true;
}

bool Fetus::WaterQuadHasBeenSet() const
{
    return m_waterQuadHasBeenSet;
}

FieldInfo Fetus::GetAFI() const
{
    return m_aFI;
}

void Fetus::SetAFI(const FieldInfo& _aFI)
{
    m_aFI = _aFI;
    m_aFIHasBeenSet = true;
}

bool Fetus::AFIHasBeenSet() const
{
    return m_aFIHasBeenSet;
}

FieldInfo Fetus::GetFHR() const
{
    return m_fHR;
}

void Fetus::SetFHR(const FieldInfo& _fHR)
{
    m_fHR = _fHR;
    m_fHRHasBeenSet = true;
}

bool Fetus::FHRHasBeenSet() const
{
    return m_fHRHasBeenSet;
}

FieldInfo Fetus::GetMovement() const
{
    return m_movement;
}

void Fetus::SetMovement(const FieldInfo& _movement)
{
    m_movement = _movement;
    m_movementHasBeenSet = true;
}

bool Fetus::MovementHasBeenSet() const
{
    return m_movementHasBeenSet;
}

FieldInfo Fetus::GetNum() const
{
    return m_num;
}

void Fetus::SetNum(const FieldInfo& _num)
{
    m_num = _num;
    m_numHasBeenSet = true;
}

bool Fetus::NumHasBeenSet() const
{
    return m_numHasBeenSet;
}

FieldInfo Fetus::GetPosition() const
{
    return m_position;
}

void Fetus::SetPosition(const FieldInfo& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool Fetus::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

FieldInfo Fetus::GetAlive() const
{
    return m_alive;
}

void Fetus::SetAlive(const FieldInfo& _alive)
{
    m_alive = _alive;
    m_aliveHasBeenSet = true;
}

bool Fetus::AliveHasBeenSet() const
{
    return m_aliveHasBeenSet;
}

FieldInfo Fetus::GetPlacentaLocation() const
{
    return m_placentaLocation;
}

void Fetus::SetPlacentaLocation(const FieldInfo& _placentaLocation)
{
    m_placentaLocation = _placentaLocation;
    m_placentaLocationHasBeenSet = true;
}

bool Fetus::PlacentaLocationHasBeenSet() const
{
    return m_placentaLocationHasBeenSet;
}

FieldInfo Fetus::GetPlacentaThickness() const
{
    return m_placentaThickness;
}

void Fetus::SetPlacentaThickness(const FieldInfo& _placentaThickness)
{
    m_placentaThickness = _placentaThickness;
    m_placentaThicknessHasBeenSet = true;
}

bool Fetus::PlacentaThicknessHasBeenSet() const
{
    return m_placentaThicknessHasBeenSet;
}

FieldInfo Fetus::GetPlacentaGrade() const
{
    return m_placentaGrade;
}

void Fetus::SetPlacentaGrade(const FieldInfo& _placentaGrade)
{
    m_placentaGrade = _placentaGrade;
    m_placentaGradeHasBeenSet = true;
}

bool Fetus::PlacentaGradeHasBeenSet() const
{
    return m_placentaGradeHasBeenSet;
}

FieldInfo Fetus::GetGestationTime() const
{
    return m_gestationTime;
}

void Fetus::SetGestationTime(const FieldInfo& _gestationTime)
{
    m_gestationTime = _gestationTime;
    m_gestationTimeHasBeenSet = true;
}

bool Fetus::GestationTimeHasBeenSet() const
{
    return m_gestationTimeHasBeenSet;
}

FieldInfo Fetus::GetGestationPeriod() const
{
    return m_gestationPeriod;
}

void Fetus::SetGestationPeriod(const FieldInfo& _gestationPeriod)
{
    m_gestationPeriod = _gestationPeriod;
    m_gestationPeriodHasBeenSet = true;
}

bool Fetus::GestationPeriodHasBeenSet() const
{
    return m_gestationPeriodHasBeenSet;
}

FieldInfo Fetus::GetAroundNeck() const
{
    return m_aroundNeck;
}

void Fetus::SetAroundNeck(const FieldInfo& _aroundNeck)
{
    m_aroundNeck = _aroundNeck;
    m_aroundNeckHasBeenSet = true;
}

bool Fetus::AroundNeckHasBeenSet() const
{
    return m_aroundNeckHasBeenSet;
}

vector<FieldInfo> Fetus::GetSym() const
{
    return m_sym;
}

void Fetus::SetSym(const vector<FieldInfo>& _sym)
{
    m_sym = _sym;
    m_symHasBeenSet = true;
}

bool Fetus::SymHasBeenSet() const
{
    return m_symHasBeenSet;
}

string Fetus::GetSrc() const
{
    return m_src;
}

void Fetus::SetSrc(const string& _src)
{
    m_src = _src;
    m_srcHasBeenSet = true;
}

bool Fetus::SrcHasBeenSet() const
{
    return m_srcHasBeenSet;
}

