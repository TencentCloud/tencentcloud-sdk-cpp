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

#include <tencentcloud/dts/v20211206/model/DescribeSubscribeDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

DescribeSubscribeDetailResponse::DescribeSubscribeDetailResponse() :
    m_subscribeIdHasBeenSet(false),
    m_subscribeNameHasBeenSet(false),
    m_productHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subsStatusHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_isolateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_offlineTimeHasBeenSet(false),
    m_payTypeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_brokerHasBeenSet(false),
    m_subscribeModeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_subscribeObjectsHasBeenSet(false),
    m_kafkaConfigHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_pipelineInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_extraAttrHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSubscribeDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SubscribeId") && !rsp["SubscribeId"].IsNull())
    {
        if (!rsp["SubscribeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeId = string(rsp["SubscribeId"].GetString());
        m_subscribeIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeName") && !rsp["SubscribeName"].IsNull())
    {
        if (!rsp["SubscribeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeName = string(rsp["SubscribeName"].GetString());
        m_subscribeNameHasBeenSet = true;
    }

    if (rsp.HasMember("Product") && !rsp["Product"].IsNull())
    {
        if (!rsp["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(rsp["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = string(rsp["InstanceStatus"].GetString());
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("SubsStatus") && !rsp["SubsStatus"].IsNull())
    {
        if (!rsp["SubsStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubsStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subsStatus = string(rsp["SubsStatus"].GetString());
        m_subsStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ModifyTime") && !rsp["ModifyTime"].IsNull())
    {
        if (!rsp["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(rsp["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("IsolateTime") && !rsp["IsolateTime"].IsNull())
    {
        if (!rsp["IsolateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IsolateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolateTime = string(rsp["IsolateTime"].GetString());
        m_isolateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("OfflineTime") && !rsp["OfflineTime"].IsNull())
    {
        if (!rsp["OfflineTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OfflineTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_offlineTime = string(rsp["OfflineTime"].GetString());
        m_offlineTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PayType") && !rsp["PayType"].IsNull())
    {
        if (!rsp["PayType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_payType = rsp["PayType"].GetInt64();
        m_payTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("Topic") && !rsp["Topic"].IsNull())
    {
        if (!rsp["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(rsp["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (rsp.HasMember("Broker") && !rsp["Broker"].IsNull())
    {
        if (!rsp["Broker"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Broker` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_broker = string(rsp["Broker"].GetString());
        m_brokerHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeMode") && !rsp["SubscribeMode"].IsNull())
    {
        if (!rsp["SubscribeMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubscribeMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscribeMode = string(rsp["SubscribeMode"].GetString());
        m_subscribeModeHasBeenSet = true;
    }

    if (rsp.HasMember("Protocol") && !rsp["Protocol"].IsNull())
    {
        if (!rsp["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(rsp["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (rsp.HasMember("SubscribeObjects") && !rsp["SubscribeObjects"].IsNull())
    {
        if (!rsp["SubscribeObjects"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubscribeObjects` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SubscribeObjects"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubscribeObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subscribeObjects.push_back(item);
        }
        m_subscribeObjectsHasBeenSet = true;
    }

    if (rsp.HasMember("KafkaConfig") && !rsp["KafkaConfig"].IsNull())
    {
        if (!rsp["KafkaConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_kafkaConfig.Deserialize(rsp["KafkaConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_kafkaConfigHasBeenSet = true;
    }

    if (rsp.HasMember("KafkaVersion") && !rsp["KafkaVersion"].IsNull())
    {
        if (!rsp["KafkaVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaVersion = string(rsp["KafkaVersion"].GetString());
        m_kafkaVersionHasBeenSet = true;
    }

    if (rsp.HasMember("AccessType") && !rsp["AccessType"].IsNull())
    {
        if (!rsp["AccessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = string(rsp["AccessType"].GetString());
        m_accessTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Endpoints") && !rsp["Endpoints"].IsNull())
    {
        if (!rsp["Endpoints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Endpoints` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Endpoints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            EndpointItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_endpoints.push_back(item);
        }
        m_endpointsHasBeenSet = true;
    }

    if (rsp.HasMember("PipelineInfo") && !rsp["PipelineInfo"].IsNull())
    {
        if (!rsp["PipelineInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PipelineInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PipelineInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PipelineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pipelineInfo.push_back(item);
        }
        m_pipelineInfoHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("Errors") && !rsp["Errors"].IsNull())
    {
        if (!rsp["Errors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Errors` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Errors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubsErr item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errors.push_back(item);
        }
        m_errorsHasBeenSet = true;
    }

    if (rsp.HasMember("ExtraAttr") && !rsp["ExtraAttr"].IsNull())
    {
        if (!rsp["ExtraAttr"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExtraAttr` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ExtraAttr"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValuePairOption item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_extraAttr.push_back(item);
        }
        m_extraAttrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSubscribeDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_subscribeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeName.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subsStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_offlineTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_offlineTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payType, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_brokerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Broker";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_broker.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subscribeMode.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_subscribeObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscribeObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscribeObjects.begin(); itr != m_subscribeObjects.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_kafkaConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_kafkaConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_kafkaVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessType.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_endpoints.begin(); itr != m_endpoints.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pipelineInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PipelineInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pipelineInfo.begin(); itr != m_pipelineInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_errorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Errors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errors.begin(); itr != m_errors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_extraAttrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtraAttr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_extraAttr.begin(); itr != m_extraAttr.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeSubscribeDetailResponse::GetSubscribeId() const
{
    return m_subscribeId;
}

bool DescribeSubscribeDetailResponse::SubscribeIdHasBeenSet() const
{
    return m_subscribeIdHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetSubscribeName() const
{
    return m_subscribeName;
}

bool DescribeSubscribeDetailResponse::SubscribeNameHasBeenSet() const
{
    return m_subscribeNameHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetProduct() const
{
    return m_product;
}

bool DescribeSubscribeDetailResponse::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeSubscribeDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribeSubscribeDetailResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSubscribeDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetSubsStatus() const
{
    return m_subsStatus;
}

bool DescribeSubscribeDetailResponse::SubsStatusHasBeenSet() const
{
    return m_subsStatusHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetModifyTime() const
{
    return m_modifyTime;
}

bool DescribeSubscribeDetailResponse::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSubscribeDetailResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetIsolateTime() const
{
    return m_isolateTime;
}

bool DescribeSubscribeDetailResponse::IsolateTimeHasBeenSet() const
{
    return m_isolateTimeHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribeSubscribeDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetOfflineTime() const
{
    return m_offlineTime;
}

bool DescribeSubscribeDetailResponse::OfflineTimeHasBeenSet() const
{
    return m_offlineTimeHasBeenSet;
}

int64_t DescribeSubscribeDetailResponse::GetPayType() const
{
    return m_payType;
}

bool DescribeSubscribeDetailResponse::PayTypeHasBeenSet() const
{
    return m_payTypeHasBeenSet;
}

int64_t DescribeSubscribeDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribeSubscribeDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeSubscribeDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetTopic() const
{
    return m_topic;
}

bool DescribeSubscribeDetailResponse::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetBroker() const
{
    return m_broker;
}

bool DescribeSubscribeDetailResponse::BrokerHasBeenSet() const
{
    return m_brokerHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetSubscribeMode() const
{
    return m_subscribeMode;
}

bool DescribeSubscribeDetailResponse::SubscribeModeHasBeenSet() const
{
    return m_subscribeModeHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetProtocol() const
{
    return m_protocol;
}

bool DescribeSubscribeDetailResponse::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

vector<SubscribeObject> DescribeSubscribeDetailResponse::GetSubscribeObjects() const
{
    return m_subscribeObjects;
}

bool DescribeSubscribeDetailResponse::SubscribeObjectsHasBeenSet() const
{
    return m_subscribeObjectsHasBeenSet;
}

SubscribeKafkaConfig DescribeSubscribeDetailResponse::GetKafkaConfig() const
{
    return m_kafkaConfig;
}

bool DescribeSubscribeDetailResponse::KafkaConfigHasBeenSet() const
{
    return m_kafkaConfigHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetKafkaVersion() const
{
    return m_kafkaVersion;
}

bool DescribeSubscribeDetailResponse::KafkaVersionHasBeenSet() const
{
    return m_kafkaVersionHasBeenSet;
}

string DescribeSubscribeDetailResponse::GetAccessType() const
{
    return m_accessType;
}

bool DescribeSubscribeDetailResponse::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<EndpointItem> DescribeSubscribeDetailResponse::GetEndpoints() const
{
    return m_endpoints;
}

bool DescribeSubscribeDetailResponse::EndpointsHasBeenSet() const
{
    return m_endpointsHasBeenSet;
}

vector<PipelineInfo> DescribeSubscribeDetailResponse::GetPipelineInfo() const
{
    return m_pipelineInfo;
}

bool DescribeSubscribeDetailResponse::PipelineInfoHasBeenSet() const
{
    return m_pipelineInfoHasBeenSet;
}

vector<TagItem> DescribeSubscribeDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeSubscribeDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

vector<SubsErr> DescribeSubscribeDetailResponse::GetErrors() const
{
    return m_errors;
}

bool DescribeSubscribeDetailResponse::ErrorsHasBeenSet() const
{
    return m_errorsHasBeenSet;
}

vector<KeyValuePairOption> DescribeSubscribeDetailResponse::GetExtraAttr() const
{
    return m_extraAttr;
}

bool DescribeSubscribeDetailResponse::ExtraAttrHasBeenSet() const
{
    return m_extraAttrHasBeenSet;
}


