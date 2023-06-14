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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEUPINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEUPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ScaleUpInstance请求参数结构体
                */
                class ScaleUpInstanceRequest : public AbstractModel
                {
                public:
                    ScaleUpInstanceRequest();
                    ~ScaleUpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例唯一ID
                     * @return InstanceId 实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceId 实例唯一ID
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
                     * 获取节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @return Type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @param _type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取clickhouse节点规格。
                     * @return SpecName clickhouse节点规格。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置clickhouse节点规格。
                     * @param _specName clickhouse节点规格。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取是否滚动重启，false为不滚动重启，true为滚动重启
                     * @return ScaleUpEnableRolling 是否滚动重启，false为不滚动重启，true为滚动重启
                     * 
                     */
                    bool GetScaleUpEnableRolling() const;

                    /**
                     * 设置是否滚动重启，false为不滚动重启，true为滚动重启
                     * @param _scaleUpEnableRolling 是否滚动重启，false为不滚动重启，true为滚动重启
                     * 
                     */
                    void SetScaleUpEnableRolling(const bool& _scaleUpEnableRolling);

                    /**
                     * 判断参数 ScaleUpEnableRolling 是否已赋值
                     * @return ScaleUpEnableRolling 是否已赋值
                     * 
                     */
                    bool ScaleUpEnableRollingHasBeenSet() const;

                private:

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * clickhouse节点规格。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 是否滚动重启，false为不滚动重启，true为滚动重启
                     */
                    bool m_scaleUpEnableRolling;
                    bool m_scaleUpEnableRollingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEUPINSTANCEREQUEST_H_
