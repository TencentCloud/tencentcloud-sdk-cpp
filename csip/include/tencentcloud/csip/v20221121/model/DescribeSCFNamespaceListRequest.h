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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFNAMESPACELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFNAMESPACELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSCFNamespaceList请求参数结构体
                */
                class DescribeSCFNamespaceListRequest : public AbstractModel
                {
                public:
                    DescribeSCFNamespaceListRequest();
                    ~DescribeSCFNamespaceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云函数所在地域
参数格式：腾讯云标准 Region，如 ap-guangzhou / ap-shanghai
                     * @return SCFRegion 云函数所在地域
参数格式：腾讯云标准 Region，如 ap-guangzhou / ap-shanghai
                     * 
                     */
                    std::string GetSCFRegion() const;

                    /**
                     * 设置云函数所在地域
参数格式：腾讯云标准 Region，如 ap-guangzhou / ap-shanghai
                     * @param _sCFRegion 云函数所在地域
参数格式：腾讯云标准 Region，如 ap-guangzhou / ap-shanghai
                     * 
                     */
                    void SetSCFRegion(const std::string& _sCFRegion);

                    /**
                     * 判断参数 SCFRegion 是否已赋值
                     * @return SCFRegion 是否已赋值
                     * 
                     */
                    bool SCFRegionHasBeenSet() const;

                    /**
                     * 获取单页条数
取值范围：[1, 100]
默认值：20
                     * @return Limit 单页条数
取值范围：[1, 100]
默认值：20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数
取值范围：[1, 100]
默认值：20
                     * @param _limit 单页条数
取值范围：[1, 100]
默认值：20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @return Offset 分页偏移量
取值范围：[0, +∞)
默认值：0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
取值范围：[0, +∞)
默认值：0
                     * @param _offset 分页偏移量
取值范围：[0, +∞)
默认值：0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 云函数所在地域
参数格式：腾讯云标准 Region，如 ap-guangzhou / ap-shanghai
                     */
                    std::string m_sCFRegion;
                    bool m_sCFRegionHasBeenSet;

                    /**
                     * 单页条数
取值范围：[1, 100]
默认值：20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
取值范围：[0, +∞)
默认值：0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESCFNAMESPACELISTREQUEST_H_
