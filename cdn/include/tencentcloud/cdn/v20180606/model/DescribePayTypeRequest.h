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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_

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
                * DescribePayType请求参数结构体
                */
                class DescribePayTypeRequest : public AbstractModel
                {
                public:
                    DescribePayTypeRequest();
                    ~DescribePayTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定服务地域查询，不填充表示查询中国境内 CDN 计费方式
mainland：指定查询中国境内 CDN 计费方式
overseas：指定查询中国境外 CDN 计费方式
                     * @return Area 指定服务地域查询，不填充表示查询中国境内 CDN 计费方式
mainland：指定查询中国境内 CDN 计费方式
overseas：指定查询中国境外 CDN 计费方式
                     */
                    std::string GetArea() const;

                    /**
                     * 设置指定服务地域查询，不填充表示查询中国境内 CDN 计费方式
mainland：指定查询中国境内 CDN 计费方式
overseas：指定查询中国境外 CDN 计费方式
                     * @param Area 指定服务地域查询，不填充表示查询中国境内 CDN 计费方式
mainland：指定查询中国境内 CDN 计费方式
overseas：指定查询中国境外 CDN 计费方式
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 指定服务地域查询，不填充表示查询中国境内 CDN 计费方式
mainland：指定查询中国境内 CDN 计费方式
overseas：指定查询中国境外 CDN 计费方式
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEPAYTYPEREQUEST_H_
