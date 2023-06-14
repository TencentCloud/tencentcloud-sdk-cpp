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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDisasterRecoverGroupAttribute请求参数结构体
                */
                class ModifyDisasterRecoverGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDisasterRecoverGroupAttributeRequest();
                    ~ModifyDisasterRecoverGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分散置放群组ID，可使用[DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/api/213/17810)接口获取。
                     * @return DisasterRecoverGroupId 分散置放群组ID，可使用[DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/api/213/17810)接口获取。
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置分散置放群组ID，可使用[DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/api/213/17810)接口获取。
                     * @param _disasterRecoverGroupId 分散置放群组ID，可使用[DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/api/213/17810)接口获取。
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取分散置放群组名称，长度1-60个字符，支持中、英文。
                     * @return Name 分散置放群组名称，长度1-60个字符，支持中、英文。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分散置放群组名称，长度1-60个字符，支持中、英文。
                     * @param _name 分散置放群组名称，长度1-60个字符，支持中、英文。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 分散置放群组ID，可使用[DescribeDisasterRecoverGroups](https://cloud.tencent.com/document/api/213/17810)接口获取。
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * 分散置放群组名称，长度1-60个字符，支持中、英文。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYDISASTERRECOVERGROUPATTRIBUTEREQUEST_H_
