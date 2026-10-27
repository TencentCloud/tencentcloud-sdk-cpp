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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCEBASICATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCEBASICATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/AttributeInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * ModifyInstanceBasicAttribute请求参数结构体
                */
                class ModifyInstanceBasicAttributeRequest : public AbstractModel
                {
                public:
                    ModifyInstanceBasicAttributeRequest();
                    ~ModifyInstanceBasicAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云桌面实例id
                     * @return InstanceId 云桌面实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云桌面实例id
                     * @param _instanceId 云桌面实例id
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
                     * 获取修改云桌面实例的属性信息
                     * @return AttributeInfoList 修改云桌面实例的属性信息
                     * 
                     */
                    std::vector<AttributeInfo> GetAttributeInfoList() const;

                    /**
                     * 设置修改云桌面实例的属性信息
                     * @param _attributeInfoList 修改云桌面实例的属性信息
                     * 
                     */
                    void SetAttributeInfoList(const std::vector<AttributeInfo>& _attributeInfoList);

                    /**
                     * 判断参数 AttributeInfoList 是否已赋值
                     * @return AttributeInfoList 是否已赋值
                     * 
                     */
                    bool AttributeInfoListHasBeenSet() const;

                private:

                    /**
                     * 云桌面实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改云桌面实例的属性信息
                     */
                    std::vector<AttributeInfo> m_attributeInfoList;
                    bool m_attributeInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_MODIFYINSTANCEBASICATTRIBUTEREQUEST_H_
