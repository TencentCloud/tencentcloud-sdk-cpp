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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTDEMApplication请求参数结构体
                */
                class CreateTDEMApplicationRequest : public AbstractModel
                {
                public:
                    CreateTDEMApplicationRequest();
                    ~CreateTDEMApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务系统 ID（必填）</p>
                     * @return InstanceId <p>业务系统 ID（必填）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>业务系统 ID（必填）</p>
                     * @param _instanceId <p>业务系统 ID（必填）</p>
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
                     * 获取<p>应用名称（必填）</p>
                     * @return Name <p>应用名称（必填）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>应用名称（必填）</p>
                     * @param _name <p>应用名称（必填）</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>应用类型。取值：web、wx-miniprogram、uniapp、ios、android、electron、rn（React Native）。</p>
                     * @return Type <p>应用类型。取值：web、wx-miniprogram、uniapp、ios、android、electron、rn（React Native）。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>应用类型。取值：web、wx-miniprogram、uniapp、ios、android、electron、rn（React Native）。</p>
                     * @param _type <p>应用类型。取值：web、wx-miniprogram、uniapp、ios、android、electron、rn（React Native）。</p>
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
                     * 获取<p>应用描述（可选）</p>
                     * @return Desc <p>应用描述（可选）</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>应用描述（可选）</p>
                     * @param _desc <p>应用描述（可选）</p>
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取<p>APM 实例 ID</p>
                     * @return ApmInstanceIds <p>APM 实例 ID</p>
                     * 
                     */
                    std::vector<std::string> GetApmInstanceIds() const;

                    /**
                     * 设置<p>APM 实例 ID</p>
                     * @param _apmInstanceIds <p>APM 实例 ID</p>
                     * 
                     */
                    void SetApmInstanceIds(const std::vector<std::string>& _apmInstanceIds);

                    /**
                     * 判断参数 ApmInstanceIds 是否已赋值
                     * @return ApmInstanceIds 是否已赋值
                     * 
                     */
                    bool ApmInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统 ID（必填）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>应用名称（必填）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>应用类型。取值：web、wx-miniprogram、uniapp、ios、android、electron、rn（React Native）。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>应用描述（可选）</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>APM 实例 ID</p>
                     */
                    std::vector<std::string> m_apmInstanceIds;
                    bool m_apmInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMAPPLICATIONREQUEST_H_
