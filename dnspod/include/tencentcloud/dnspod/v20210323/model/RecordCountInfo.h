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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 查询记录列表的数量统计信息
                */
                class RecordCountInfo : public AbstractModel
                {
                public:
                    RecordCountInfo();
                    ~RecordCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子域名数量
                     * @return SubdomainCount 子域名数量
                     * 
                     */
                    uint64_t GetSubdomainCount() const;

                    /**
                     * 设置子域名数量
                     * @param _subdomainCount 子域名数量
                     * 
                     */
                    void SetSubdomainCount(const uint64_t& _subdomainCount);

                    /**
                     * 判断参数 SubdomainCount 是否已赋值
                     * @return SubdomainCount 是否已赋值
                     * 
                     */
                    bool SubdomainCountHasBeenSet() const;

                    /**
                     * 获取列表返回的记录数
                     * @return ListCount 列表返回的记录数
                     * 
                     */
                    uint64_t GetListCount() const;

                    /**
                     * 设置列表返回的记录数
                     * @param _listCount 列表返回的记录数
                     * 
                     */
                    void SetListCount(const uint64_t& _listCount);

                    /**
                     * 判断参数 ListCount 是否已赋值
                     * @return ListCount 是否已赋值
                     * 
                     */
                    bool ListCountHasBeenSet() const;

                    /**
                     * 获取总的记录数
                     * @return TotalCount 总的记录数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总的记录数
                     * @param _totalCount 总的记录数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 子域名数量
                     */
                    uint64_t m_subdomainCount;
                    bool m_subdomainCountHasBeenSet;

                    /**
                     * 列表返回的记录数
                     */
                    uint64_t m_listCount;
                    bool m_listCountHasBeenSet;

                    /**
                     * 总的记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RECORDCOUNTINFO_H_
