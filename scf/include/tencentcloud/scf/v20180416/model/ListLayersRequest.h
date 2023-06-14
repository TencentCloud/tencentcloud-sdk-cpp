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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListLayers请求参数结构体
                */
                class ListLayersRequest : public AbstractModel
                {
                public:
                    ListLayersRequest();
                    ~ListLayersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取适配的运行时
                     * @return CompatibleRuntime 适配的运行时
                     * 
                     */
                    std::string GetCompatibleRuntime() const;

                    /**
                     * 设置适配的运行时
                     * @param _compatibleRuntime 适配的运行时
                     * 
                     */
                    void SetCompatibleRuntime(const std::string& _compatibleRuntime);

                    /**
                     * 判断参数 CompatibleRuntime 是否已赋值
                     * @return CompatibleRuntime 是否已赋值
                     * 
                     */
                    bool CompatibleRuntimeHasBeenSet() const;

                    /**
                     * 获取偏移位置
                     * @return Offset 偏移位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移位置
                     * @param _offset 偏移位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询数目限制
                     * @return Limit 查询数目限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数目限制
                     * @param _limit 查询数目限制
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
                     * 获取查询key，模糊匹配名称
                     * @return SearchKey 查询key，模糊匹配名称
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置查询key，模糊匹配名称
                     * @param _searchKey 查询key，模糊匹配名称
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 适配的运行时
                     */
                    std::string m_compatibleRuntime;
                    bool m_compatibleRuntimeHasBeenSet;

                    /**
                     * 偏移位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数目限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询key，模糊匹配名称
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTLAYERSREQUEST_H_
