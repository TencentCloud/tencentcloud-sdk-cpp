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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyNetReturnSwitch请求参数结构体
                */
                class ModifyNetReturnSwitchRequest : public AbstractModel
                {
                public:
                    ModifyNetReturnSwitchRequest();
                    ~ModifyNetReturnSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（net表示高防IP专业版）
                     * @return Business 大禹子产品代号（net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（net表示高防IP专业版）
                     * @param _business 大禹子产品代号（net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源实例ID
                     * @return Id 资源实例ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源实例ID
                     * @param _id 资源实例ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Status 表示回切开关，0: 关闭， 1:打开
                     * @return Status Status 表示回切开关，0: 关闭， 1:打开
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status 表示回切开关，0: 关闭， 1:打开
                     * @param _status Status 表示回切开关，0: 关闭， 1:打开
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取回切时长，单位：小时，取值[0,1,2,3,4,5,6;]当status=1时必选填写Hour>0
                     * @return Hour 回切时长，单位：小时，取值[0,1,2,3,4,5,6;]当status=1时必选填写Hour>0
                     * 
                     */
                    uint64_t GetHour() const;

                    /**
                     * 设置回切时长，单位：小时，取值[0,1,2,3,4,5,6;]当status=1时必选填写Hour>0
                     * @param _hour 回切时长，单位：小时，取值[0,1,2,3,4,5,6;]当status=1时必选填写Hour>0
                     * 
                     */
                    void SetHour(const uint64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源实例ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Status 表示回切开关，0: 关闭， 1:打开
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 回切时长，单位：小时，取值[0,1,2,3,4,5,6;]当status=1时必选填写Hour>0
                     */
                    uint64_t m_hour;
                    bool m_hourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYNETRETURNSWITCHREQUEST_H_
