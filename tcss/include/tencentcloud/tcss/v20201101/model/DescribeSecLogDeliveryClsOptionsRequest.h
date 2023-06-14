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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeSecLogDeliveryClsOptions请求参数结构体
                */
                class DescribeSecLogDeliveryClsOptionsRequest : public AbstractModel
                {
                public:
                    DescribeSecLogDeliveryClsOptionsRequest();
                    ~DescribeSecLogDeliveryClsOptionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域
                     * @return ClsRegion 地域
                     * 
                     */
                    std::string GetClsRegion() const;

                    /**
                     * 设置地域
                     * @param _clsRegion 地域
                     * 
                     */
                    void SetClsRegion(const std::string& _clsRegion);

                    /**
                     * 判断参数 ClsRegion 是否已赋值
                     * @return ClsRegion 是否已赋值
                     * 
                     */
                    bool ClsRegionHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_clsRegion;
                    bool m_clsRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESECLOGDELIVERYCLSOPTIONSREQUEST_H_
