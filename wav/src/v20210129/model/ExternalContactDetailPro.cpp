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

#include <tencentcloud/wav/v20210129/model/ExternalContactDetailPro.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ExternalContactDetailPro::ExternalContactDetailPro() :
    m_customerHasBeenSet(false),
    m_followUserHasBeenSet(false)
{
}

CoreInternalOutcome ExternalContactDetailPro::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Customer") && !value["Customer"].IsNull())
    {
        if (!value["Customer"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalContactDetailPro.Customer` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customer.Deserialize(value["Customer"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customerHasBeenSet = true;
    }

    if (value.HasMember("FollowUser") && !value["FollowUser"].IsNull())
    {
        if (!value["FollowUser"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExternalContactDetailPro.FollowUser` is not array type"));

        const rapidjson::Value &tmpValue = value["FollowUser"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FollowUserPro item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_followUser.push_back(item);
        }
        m_followUserHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExternalContactDetailPro::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Customer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customer.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_followUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_followUser.begin(); itr != m_followUser.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ExternalContact ExternalContactDetailPro::GetCustomer() const
{
    return m_customer;
}

void ExternalContactDetailPro::SetCustomer(const ExternalContact& _customer)
{
    m_customer = _customer;
    m_customerHasBeenSet = true;
}

bool ExternalContactDetailPro::CustomerHasBeenSet() const
{
    return m_customerHasBeenSet;
}

vector<FollowUserPro> ExternalContactDetailPro::GetFollowUser() const
{
    return m_followUser;
}

void ExternalContactDetailPro::SetFollowUser(const vector<FollowUserPro>& _followUser)
{
    m_followUser = _followUser;
    m_followUserHasBeenSet = true;
}

bool ExternalContactDetailPro::FollowUserHasBeenSet() const
{
    return m_followUserHasBeenSet;
}

