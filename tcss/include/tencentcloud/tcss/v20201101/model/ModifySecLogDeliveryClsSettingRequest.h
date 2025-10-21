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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYCLSSETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYCLSSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SecLogDeliveryClsSettingInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifySecLogDeliveryClsSetting请求参数结构体
                */
                class ModifySecLogDeliveryClsSettingRequest : public AbstractModel
                {
                public:
                    ModifySecLogDeliveryClsSettingRequest();
                    ~ModifySecLogDeliveryClsSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志信息
                     * @return List 日志信息
                     * 
                     */
                    std::vector<SecLogDeliveryClsSettingInfo> GetList() const;

                    /**
                     * 设置日志信息
                     * @param _list 日志信息
                     * 
                     */
                    void SetList(const std::vector<SecLogDeliveryClsSettingInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 日志信息
                     */
                    std::vector<SecLogDeliveryClsSettingInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYSECLOGDELIVERYCLSSETTINGREQUEST_H_
