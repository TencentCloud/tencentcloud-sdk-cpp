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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * ListKeyAliasByRegion请求参数结构体
                */
                class ListKeyAliasByRegionRequest : public AbstractModel
                {
                public:
                    ListKeyAliasByRegionRequest();
                    ~ListKeyAliasByRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Kms地域
                     * @return KmsRegion Kms地域
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置Kms地域
                     * @param _kmsRegion Kms地域
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取含义跟 SQL 查询的 Limit 一致，表示本次获最多获取 Limit 个元素。缺省值为10，最大值为200
                     * @return Limit 含义跟 SQL 查询的 Limit 一致，表示本次获最多获取 Limit 个元素。缺省值为10，最大值为200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置含义跟 SQL 查询的 Limit 一致，表示本次获最多获取 Limit 个元素。缺省值为10，最大值为200
                     * @param _limit 含义跟 SQL 查询的 Limit 一致，表示本次获最多获取 Limit 个元素。缺省值为10，最大值为200
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
                     * 获取含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @return Offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     * @param _offset 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
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
                     * Kms地域
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * 含义跟 SQL 查询的 Limit 一致，表示本次获最多获取 Limit 个元素。缺省值为10，最大值为200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 含义跟 SQL 查询的 Offset 一致，表示本次获取从按一定顺序排列数组的第 Offset 个元素开始，缺省为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_LISTKEYALIASBYREGIONREQUEST_H_
