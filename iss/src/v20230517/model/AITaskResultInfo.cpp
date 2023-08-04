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

#include <tencentcloud/iss/v20230517/model/AITaskResultInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AITaskResultInfo::AITaskResultInfo() :
    m_bodyHasBeenSet(false),
    m_petHasBeenSet(false),
    m_carHasBeenSet(false),
    m_chefHatHasBeenSet(false),
    m_chefClothHasBeenSet(false),
    m_faceMaskHasBeenSet(false),
    m_smokingHasBeenSet(false),
    m_phoneCallHasBeenSet(false)
{
}

CoreInternalOutcome AITaskResultInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Body") && !value["Body"].IsNull())
    {
        if (!value["Body"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.Body` is not array type"));

        const rapidjson::Value &tmpValue = value["Body"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BodyAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_body.push_back(item);
        }
        m_bodyHasBeenSet = true;
    }

    if (value.HasMember("Pet") && !value["Pet"].IsNull())
    {
        if (!value["Pet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.Pet` is not array type"));

        const rapidjson::Value &tmpValue = value["Pet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PetAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pet.push_back(item);
        }
        m_petHasBeenSet = true;
    }

    if (value.HasMember("Car") && !value["Car"].IsNull())
    {
        if (!value["Car"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.Car` is not array type"));

        const rapidjson::Value &tmpValue = value["Car"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CarAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_car.push_back(item);
        }
        m_carHasBeenSet = true;
    }

    if (value.HasMember("ChefHat") && !value["ChefHat"].IsNull())
    {
        if (!value["ChefHat"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.ChefHat` is not array type"));

        const rapidjson::Value &tmpValue = value["ChefHat"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChefHatAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chefHat.push_back(item);
        }
        m_chefHatHasBeenSet = true;
    }

    if (value.HasMember("ChefCloth") && !value["ChefCloth"].IsNull())
    {
        if (!value["ChefCloth"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.ChefCloth` is not array type"));

        const rapidjson::Value &tmpValue = value["ChefCloth"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChefClothAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chefCloth.push_back(item);
        }
        m_chefClothHasBeenSet = true;
    }

    if (value.HasMember("FaceMask") && !value["FaceMask"].IsNull())
    {
        if (!value["FaceMask"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.FaceMask` is not array type"));

        const rapidjson::Value &tmpValue = value["FaceMask"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceMaskAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceMask.push_back(item);
        }
        m_faceMaskHasBeenSet = true;
    }

    if (value.HasMember("Smoking") && !value["Smoking"].IsNull())
    {
        if (!value["Smoking"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.Smoking` is not array type"));

        const rapidjson::Value &tmpValue = value["Smoking"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SmokingAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_smoking.push_back(item);
        }
        m_smokingHasBeenSet = true;
    }

    if (value.HasMember("PhoneCall") && !value["PhoneCall"].IsNull())
    {
        if (!value["PhoneCall"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AITaskResultInfo.PhoneCall` is not array type"));

        const rapidjson::Value &tmpValue = value["PhoneCall"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PhoneCallAIResultInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_phoneCall.push_back(item);
        }
        m_phoneCallHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AITaskResultInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Body";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_body.begin(); itr != m_body.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_petHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pet.begin(); itr != m_pet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_carHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Car";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_car.begin(); itr != m_car.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chefHatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChefHat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chefHat.begin(); itr != m_chefHat.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chefClothHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChefCloth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chefCloth.begin(); itr != m_chefCloth.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceMaskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceMask";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceMask.begin(); itr != m_faceMask.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_smokingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Smoking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_smoking.begin(); itr != m_smoking.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_phoneCallHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneCall";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_phoneCall.begin(); itr != m_phoneCall.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<BodyAIResultInfo> AITaskResultInfo::GetBody() const
{
    return m_body;
}

void AITaskResultInfo::SetBody(const vector<BodyAIResultInfo>& _body)
{
    m_body = _body;
    m_bodyHasBeenSet = true;
}

bool AITaskResultInfo::BodyHasBeenSet() const
{
    return m_bodyHasBeenSet;
}

vector<PetAIResultInfo> AITaskResultInfo::GetPet() const
{
    return m_pet;
}

void AITaskResultInfo::SetPet(const vector<PetAIResultInfo>& _pet)
{
    m_pet = _pet;
    m_petHasBeenSet = true;
}

bool AITaskResultInfo::PetHasBeenSet() const
{
    return m_petHasBeenSet;
}

vector<CarAIResultInfo> AITaskResultInfo::GetCar() const
{
    return m_car;
}

void AITaskResultInfo::SetCar(const vector<CarAIResultInfo>& _car)
{
    m_car = _car;
    m_carHasBeenSet = true;
}

bool AITaskResultInfo::CarHasBeenSet() const
{
    return m_carHasBeenSet;
}

vector<ChefHatAIResultInfo> AITaskResultInfo::GetChefHat() const
{
    return m_chefHat;
}

void AITaskResultInfo::SetChefHat(const vector<ChefHatAIResultInfo>& _chefHat)
{
    m_chefHat = _chefHat;
    m_chefHatHasBeenSet = true;
}

bool AITaskResultInfo::ChefHatHasBeenSet() const
{
    return m_chefHatHasBeenSet;
}

vector<ChefClothAIResultInfo> AITaskResultInfo::GetChefCloth() const
{
    return m_chefCloth;
}

void AITaskResultInfo::SetChefCloth(const vector<ChefClothAIResultInfo>& _chefCloth)
{
    m_chefCloth = _chefCloth;
    m_chefClothHasBeenSet = true;
}

bool AITaskResultInfo::ChefClothHasBeenSet() const
{
    return m_chefClothHasBeenSet;
}

vector<FaceMaskAIResultInfo> AITaskResultInfo::GetFaceMask() const
{
    return m_faceMask;
}

void AITaskResultInfo::SetFaceMask(const vector<FaceMaskAIResultInfo>& _faceMask)
{
    m_faceMask = _faceMask;
    m_faceMaskHasBeenSet = true;
}

bool AITaskResultInfo::FaceMaskHasBeenSet() const
{
    return m_faceMaskHasBeenSet;
}

vector<SmokingAIResultInfo> AITaskResultInfo::GetSmoking() const
{
    return m_smoking;
}

void AITaskResultInfo::SetSmoking(const vector<SmokingAIResultInfo>& _smoking)
{
    m_smoking = _smoking;
    m_smokingHasBeenSet = true;
}

bool AITaskResultInfo::SmokingHasBeenSet() const
{
    return m_smokingHasBeenSet;
}

vector<PhoneCallAIResultInfo> AITaskResultInfo::GetPhoneCall() const
{
    return m_phoneCall;
}

void AITaskResultInfo::SetPhoneCall(const vector<PhoneCallAIResultInfo>& _phoneCall)
{
    m_phoneCall = _phoneCall;
    m_phoneCallHasBeenSet = true;
}

bool AITaskResultInfo::PhoneCallHasBeenSet() const
{
    return m_phoneCallHasBeenSet;
}

