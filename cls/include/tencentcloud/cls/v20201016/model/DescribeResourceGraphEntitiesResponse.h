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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EntityInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphEntities返回参数结构体
                */
                class DescribeResourceGraphEntitiesResponse : public AbstractModel
                {
                public:
                    DescribeResourceGraphEntitiesResponse();
                    ~DescribeResourceGraphEntitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实体列表</p>
                     * @return EntityInfos <p>实体列表</p>
                     * 
                     */
                    std::vector<EntityInfo> GetEntityInfos() const;

                    /**
                     * 判断参数 EntityInfos 是否已赋值
                     * @return EntityInfos 是否已赋值
                     * 
                     */
                    bool EntityInfosHasBeenSet() const;

                    /**
                     * 获取<p>是否还有下一页</p><p>枚举值：</p><ul><li>0： 没有下一页</li><li>1： 还有下一页</li></ul>
                     * @return HasMore <p>是否还有下一页</p><p>枚举值：</p><ul><li>0： 没有下一页</li><li>1： 还有下一页</li></ul>
                     * 
                     */
                    uint64_t GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取<p>分页的游标，有值则下次分页请求原样带上，无值则表示无下一页</p>
                     * @return NextCursor <p>分页的游标，有值则下次分页请求原样带上，无值则表示无下一页</p>
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                private:

                    /**
                     * <p>实体列表</p>
                     */
                    std::vector<EntityInfo> m_entityInfos;
                    bool m_entityInfosHasBeenSet;

                    /**
                     * <p>是否还有下一页</p><p>枚举值：</p><ul><li>0： 没有下一页</li><li>1： 还有下一页</li></ul>
                     */
                    uint64_t m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * <p>分页的游标，有值则下次分页请求原样带上，无值则表示无下一页</p>
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHENTITIESRESPONSE_H_
