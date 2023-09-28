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

#include <tencentcloud/tke/v20180525/model/RIUtilizationDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

RIUtilizationDetail::RIUtilizationDetail() :
    m_reservedInstanceIdHasBeenSet(false),
    m_eksIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_kindHasBeenSet(false),
    m_kindNameHasBeenSet(false),
    m_uidHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

CoreInternalOutcome RIUtilizationDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReservedInstanceId") && !value["ReservedInstanceId"].IsNull())
    {
        if (!value["ReservedInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.ReservedInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedInstanceId = string(value["ReservedInstanceId"].GetString());
        m_reservedInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("EksId") && !value["EksId"].IsNull())
    {
        if (!value["EksId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.EksId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eksId = string(value["EksId"].GetString());
        m_eksIdHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("Kind") && !value["Kind"].IsNull())
    {
        if (!value["Kind"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.Kind` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kind = string(value["Kind"].GetString());
        m_kindHasBeenSet = true;
    }

    if (value.HasMember("KindName") && !value["KindName"].IsNull())
    {
        if (!value["KindName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.KindName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kindName = string(value["KindName"].GetString());
        m_kindNameHasBeenSet = true;
    }

    if (value.HasMember("Uid") && !value["Uid"].IsNull())
    {
        if (!value["Uid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.Uid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uid = string(value["Uid"].GetString());
        m_uidHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RIUtilizationDetail.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RIUtilizationDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_reservedInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_eksIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EksId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eksId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_kindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Kind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kind.c_str(), allocator).Move(), allocator);
    }

    if (m_kindNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KindName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kindName.c_str(), allocator).Move(), allocator);
    }

    if (m_uidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uid.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

}


string RIUtilizationDetail::GetReservedInstanceId() const
{
    return m_reservedInstanceId;
}

void RIUtilizationDetail::SetReservedInstanceId(const string& _reservedInstanceId)
{
    m_reservedInstanceId = _reservedInstanceId;
    m_reservedInstanceIdHasBeenSet = true;
}

bool RIUtilizationDetail::ReservedInstanceIdHasBeenSet() const
{
    return m_reservedInstanceIdHasBeenSet;
}

string RIUtilizationDetail::GetEksId() const
{
    return m_eksId;
}

void RIUtilizationDetail::SetEksId(const string& _eksId)
{
    m_eksId = _eksId;
    m_eksIdHasBeenSet = true;
}

bool RIUtilizationDetail::EksIdHasBeenSet() const
{
    return m_eksIdHasBeenSet;
}

string RIUtilizationDetail::GetClusterId() const
{
    return m_clusterId;
}

void RIUtilizationDetail::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RIUtilizationDetail::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RIUtilizationDetail::GetName() const
{
    return m_name;
}

void RIUtilizationDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RIUtilizationDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RIUtilizationDetail::GetNamespace() const
{
    return m_namespace;
}

void RIUtilizationDetail::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RIUtilizationDetail::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string RIUtilizationDetail::GetKind() const
{
    return m_kind;
}

void RIUtilizationDetail::SetKind(const string& _kind)
{
    m_kind = _kind;
    m_kindHasBeenSet = true;
}

bool RIUtilizationDetail::KindHasBeenSet() const
{
    return m_kindHasBeenSet;
}

string RIUtilizationDetail::GetKindName() const
{
    return m_kindName;
}

void RIUtilizationDetail::SetKindName(const string& _kindName)
{
    m_kindName = _kindName;
    m_kindNameHasBeenSet = true;
}

bool RIUtilizationDetail::KindNameHasBeenSet() const
{
    return m_kindNameHasBeenSet;
}

string RIUtilizationDetail::GetUid() const
{
    return m_uid;
}

void RIUtilizationDetail::SetUid(const string& _uid)
{
    m_uid = _uid;
    m_uidHasBeenSet = true;
}

bool RIUtilizationDetail::UidHasBeenSet() const
{
    return m_uidHasBeenSet;
}

string RIUtilizationDetail::GetStartTime() const
{
    return m_startTime;
}

void RIUtilizationDetail::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RIUtilizationDetail::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string RIUtilizationDetail::GetEndTime() const
{
    return m_endTime;
}

void RIUtilizationDetail::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RIUtilizationDetail::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string RIUtilizationDetail::GetProduct() const
{
    return m_product;
}

void RIUtilizationDetail::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool RIUtilizationDetail::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

