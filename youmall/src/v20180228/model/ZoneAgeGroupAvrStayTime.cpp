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

#include <tencentcloud/youmall/v20180228/model/ZoneAgeGroupAvrStayTime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Youmall::V20180228::Model;
using namespace std;

ZoneAgeGroupAvrStayTime::ZoneAgeGroupAvrStayTime() :
    m_maleAvrStayTimeHasBeenSet(false),
    m_femaleAvrStayTimeHasBeenSet(false)
{
}

CoreInternalOutcome ZoneAgeGroupAvrStayTime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaleAvrStayTime") && !value["MaleAvrStayTime"].IsNull())
    {
        if (!value["MaleAvrStayTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneAgeGroupAvrStayTime.MaleAvrStayTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_maleAvrStayTime = value["MaleAvrStayTime"].GetDouble();
        m_maleAvrStayTimeHasBeenSet = true;
    }

    if (value.HasMember("FemaleAvrStayTime") && !value["FemaleAvrStayTime"].IsNull())
    {
        if (!value["FemaleAvrStayTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneAgeGroupAvrStayTime.FemaleAvrStayTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_femaleAvrStayTime = value["FemaleAvrStayTime"].GetDouble();
        m_femaleAvrStayTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZoneAgeGroupAvrStayTime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maleAvrStayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaleAvrStayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maleAvrStayTime, allocator);
    }

    if (m_femaleAvrStayTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FemaleAvrStayTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_femaleAvrStayTime, allocator);
    }

}


double ZoneAgeGroupAvrStayTime::GetMaleAvrStayTime() const
{
    return m_maleAvrStayTime;
}

void ZoneAgeGroupAvrStayTime::SetMaleAvrStayTime(const double& _maleAvrStayTime)
{
    m_maleAvrStayTime = _maleAvrStayTime;
    m_maleAvrStayTimeHasBeenSet = true;
}

bool ZoneAgeGroupAvrStayTime::MaleAvrStayTimeHasBeenSet() const
{
    return m_maleAvrStayTimeHasBeenSet;
}

double ZoneAgeGroupAvrStayTime::GetFemaleAvrStayTime() const
{
    return m_femaleAvrStayTime;
}

void ZoneAgeGroupAvrStayTime::SetFemaleAvrStayTime(const double& _femaleAvrStayTime)
{
    m_femaleAvrStayTime = _femaleAvrStayTime;
    m_femaleAvrStayTimeHasBeenSet = true;
}

bool ZoneAgeGroupAvrStayTime::FemaleAvrStayTimeHasBeenSet() const
{
    return m_femaleAvrStayTimeHasBeenSet;
}

