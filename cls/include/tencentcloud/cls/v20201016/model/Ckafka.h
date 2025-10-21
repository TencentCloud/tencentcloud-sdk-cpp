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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CKafka的描述-需要投递到的kafka信息
                */
                class Ckafka : public AbstractModel
                {
                public:
                    Ckafka();
                    ~Ckafka() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Ckafka 的 InstanceId。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取实例id。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取实例id。
                     * @return InstanceId Ckafka 的 InstanceId。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取实例id。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取实例id。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Ckafka 的 InstanceId。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取实例id。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取实例id。
                     * @param _instanceId Ckafka 的 InstanceId。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取实例id。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取实例id。
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
                     * 获取Ckafka 的 TopicName。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicName。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicName。
                     * @return TopicName Ckafka 的 TopicName。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicName。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicName。
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置Ckafka 的 TopicName。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicName。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicName。
                     * @param _topicName Ckafka 的 TopicName。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicName。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicName。
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
                     * 获取Ckafka 的 Vip。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vip字段可为空。
                     * @return Vip Ckafka 的 Vip。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vip字段可为空。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Ckafka 的 Vip。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vip字段可为空。
                     * @param _vip Ckafka 的 Vip。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vip字段可为空。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Ckafka 的 Vport。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip port信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vport字段可为空。
                     * @return Vport Ckafka 的 Vport。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip port信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vport字段可为空。
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置Ckafka 的 Vport。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip port信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vport字段可为空。
                     * @param _vport Ckafka 的 Vport。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip port信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vport字段可为空。
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Ckafka 的 InstanceName。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取InstanceName。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取InstanceName。
- 如果是通过 角色ARN 方式创建投递任务，则InstanceName字段可为空。
                     * @return InstanceName Ckafka 的 InstanceName。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取InstanceName。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取InstanceName。
- 如果是通过 角色ARN 方式创建投递任务，则InstanceName字段可为空。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置Ckafka 的 InstanceName。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取InstanceName。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取InstanceName。
- 如果是通过 角色ARN 方式创建投递任务，则InstanceName字段可为空。
                     * @param _instanceName Ckafka 的 InstanceName。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取InstanceName。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取InstanceName。
- 如果是通过 角色ARN 方式创建投递任务，则InstanceName字段可为空。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取Ckafka 的 TopicId。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicId。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicId。
- 如果是通过 角色ARN 方式创建投递任务，则TopicId字段可为空。
                     * @return TopicId Ckafka 的 TopicId。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicId。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicId。
- 如果是通过 角色ARN 方式创建投递任务，则TopicId字段可为空。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Ckafka 的 TopicId。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicId。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicId。
- 如果是通过 角色ARN 方式创建投递任务，则TopicId字段可为空。
                     * @param _topicId Ckafka 的 TopicId。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicId。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicId。
- 如果是通过 角色ARN 方式创建投递任务，则TopicId字段可为空。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * Ckafka 的 InstanceId。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取实例id。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取实例id。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Ckafka 的 TopicName。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicName。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicName。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * Ckafka 的 Vip。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vip字段可为空。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Ckafka 的 Vport。
- 通过 [获取实例属性 ](https://cloud.tencent.com/document/product/597/40836) 获取vip port信息。
- 如果是通过 角色ARN 方式创建投递任务，则Vport字段可为空。
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Ckafka 的 InstanceName。
- 通过 [获取实例列表信息](https://cloud.tencent.com/document/product/597/40835) 获取InstanceName。
- 通过 [创建实例](https://cloud.tencent.com/document/product/597/53207) 获取InstanceName。
- 如果是通过 角色ARN 方式创建投递任务，则InstanceName字段可为空。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * Ckafka 的 TopicId。
- 通过 [创建 Topic](https://cloud.tencent.com/document/product/597/73566) 获得TopicId。
- 通过 [获取主题列表](https://cloud.tencent.com/document/product/597/40847) 获得TopicId。
- 如果是通过 角色ARN 方式创建投递任务，则TopicId字段可为空。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CKAFKA_H_
