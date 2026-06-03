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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * UpgradeBrokerVersion请求参数结构体
                */
                class UpgradeBrokerVersionRequest : public AbstractModel
                {
                public:
                    UpgradeBrokerVersionRequest();
                    ~UpgradeBrokerVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id</p>
                     * @return InstanceId <p>ckafka集群实例Id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p>
                     * @param _instanceId <p>ckafka集群实例Id</p>
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
                     * 获取<p>版本升级类型</p><p>枚举值：</p><ul><li>1： 小版本迁移升级(推荐)</li></ul>
                     * @return Type <p>版本升级类型</p><p>枚举值：</p><ul><li>1： 小版本迁移升级(推荐)</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>版本升级类型</p><p>枚举值：</p><ul><li>1： 小版本迁移升级(推荐)</li></ul>
                     * @param _type <p>版本升级类型</p><p>枚举值：</p><ul><li>1： 小版本迁移升级(推荐)</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
                     * @return SourceVersion <p>版本号</p>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _sourceVersion <p>版本号</p>
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本号</p>
                     * @return TargetVersion <p>版本号</p>
                     * 
                     */
                    std::string GetTargetVersion() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _targetVersion <p>版本号</p>
                     * 
                     */
                    void SetTargetVersion(const std::string& _targetVersion);

                    /**
                     * 判断参数 TargetVersion 是否已赋值
                     * @return TargetVersion 是否已赋值
                     * 
                     */
                    bool TargetVersionHasBeenSet() const;

                    /**
                     * 获取<p>延迟时间</p>
                     * @return DelayTimeStamp <p>延迟时间</p>
                     * 
                     */
                    std::string GetDelayTimeStamp() const;

                    /**
                     * 设置<p>延迟时间</p>
                     * @param _delayTimeStamp <p>延迟时间</p>
                     * 
                     */
                    void SetDelayTimeStamp(const std::string& _delayTimeStamp);

                    /**
                     * 判断参数 DelayTimeStamp 是否已赋值
                     * @return DelayTimeStamp 是否已赋值
                     * 
                     */
                    bool DelayTimeStampHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>版本升级类型</p><p>枚举值：</p><ul><li>1： 小版本迁移升级(推荐)</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_targetVersion;
                    bool m_targetVersionHasBeenSet;

                    /**
                     * <p>延迟时间</p>
                     */
                    std::string m_delayTimeStamp;
                    bool m_delayTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_UPGRADEBROKERVERSIONREQUEST_H_
