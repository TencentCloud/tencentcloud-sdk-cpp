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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * UpdatePayType请求参数结构体
                */
                class UpdatePayTypeRequest : public AbstractModel
                {
                public:
                    UpdatePayTypeRequest();
                    ~UpdatePayTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计费区域，mainland或overseas。
                     * @return Area 计费区域，mainland或overseas。
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置计费区域，mainland或overseas。
                     * @param _area 计费区域，mainland或overseas。
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取计费类型，flux或bandwidth。
                     * @return PayType 计费类型，flux或bandwidth。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置计费类型，flux或bandwidth。
                     * @param _payType 计费类型，flux或bandwidth。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                private:

                    /**
                     * 计费区域，mainland或overseas。
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 计费类型，flux或bandwidth。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_UPDATEPAYTYPEREQUEST_H_
