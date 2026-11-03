/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COSEVENTSUBSCRIPTION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COSEVENTSUBSCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * COS 文件事件订阅配置（Location 与 COS 桶事件投递 CKafka 的联动）
                */
                class CosEventSubscription : public AbstractModel
                {
                public:
                    CosEventSubscription();
                    ~CosEventSubscription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CKafka 实例 ID，例如 ckafka-xxxxxxxx（订阅时必填）
                     * @return InstanceId CKafka 实例 ID，例如 ckafka-xxxxxxxx（订阅时必填）
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CKafka 实例 ID，例如 ckafka-xxxxxxxx（订阅时必填）
                     * @param _instanceId CKafka 实例 ID，例如 ckafka-xxxxxxxx（订阅时必填）
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取CKafka 主题名称（订阅时必填）
                     * @return TopicName CKafka 主题名称（订阅时必填）
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置CKafka 主题名称（订阅时必填）
                     * @param _topicName CKafka 主题名称（订阅时必填）
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取服务角色名称，例如 COSNotifyRole（订阅时必填；服务端按当前租户拼接完整 ARN）
                     * @return RoleArn 服务角色名称，例如 COSNotifyRole（订阅时必填；服务端按当前租户拼接完整 ARN）
                     * 
                     */
                    std::string GetRoleArn() const;

                    /**
                     * 设置服务角色名称，例如 COSNotifyRole（订阅时必填；服务端按当前租户拼接完整 ARN）
                     * @param _roleArn 服务角色名称，例如 COSNotifyRole（订阅时必填；服务端按当前租户拼接完整 ARN）
                     * 
                     */
                    void SetRoleArn(const std::string& _roleArn);

                    /**
                     * 判断参数 RoleArn 是否已赋值
                     * @return RoleArn 是否已赋值
                     * 
                     */
                    bool RoleArnHasBeenSet() const;

                    /**
                     * 获取COS 存储桶所在地域，例如 ap-guangzhou（订阅时必填；过渡方案，后续可能改为服务端自动解析并移除）
                     * @return Region COS 存储桶所在地域，例如 ap-guangzhou（订阅时必填；过渡方案，后续可能改为服务端自动解析并移除）
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置COS 存储桶所在地域，例如 ap-guangzhou（订阅时必填；过渡方案，后续可能改为服务端自动解析并移除）
                     * @param _region COS 存储桶所在地域，例如 ap-guangzhou（订阅时必填；过渡方案，后续可能改为服务端自动解析并移除）
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * CKafka 实例 ID，例如 ckafka-xxxxxxxx（订阅时必填）
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * CKafka 主题名称（订阅时必填）
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 服务角色名称，例如 COSNotifyRole（订阅时必填；服务端按当前租户拼接完整 ARN）
                     */
                    std::string m_roleArn;
                    bool m_roleArnHasBeenSet;

                    /**
                     * COS 存储桶所在地域，例如 ap-guangzhou（订阅时必填；过渡方案，后续可能改为服务端自动解析并移除）
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_COSEVENTSUBSCRIPTION_H_
