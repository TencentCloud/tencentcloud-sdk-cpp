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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETASRKEYWORDLIBLISTREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETASRKEYWORDLIBLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetAsrKeyWordLibList请求参数结构体
                */
                class GetAsrKeyWordLibListRequest : public AbstractModel
                {
                public:
                    GetAsrKeyWordLibListRequest();
                    ~GetAsrKeyWordLibListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页Limit
                     * @return Limit 分页Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页Limit
                     * @param _limit 分页Limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取词库名称或者UIN检索
                     * @return SpecifyNames 词库名称或者UIN检索
                     * 
                     */
                    std::vector<std::string> GetSpecifyNames() const;

                    /**
                     * 设置词库名称或者UIN检索
                     * @param _specifyNames 词库名称或者UIN检索
                     * 
                     */
                    void SetSpecifyNames(const std::vector<std::string>& _specifyNames);

                    /**
                     * 判断参数 SpecifyNames 是否已赋值
                     * @return SpecifyNames 是否已赋值
                     * 
                     */
                    bool SpecifyNamesHasBeenSet() const;

                    /**
                     * 获取只看用户自己创建的
                     * @return OnlySelf 只看用户自己创建的
                     * 
                     */
                    bool GetOnlySelf() const;

                    /**
                     * 设置只看用户自己创建的
                     * @param _onlySelf 只看用户自己创建的
                     * 
                     */
                    void SetOnlySelf(const bool& _onlySelf);

                    /**
                     * 判断参数 OnlySelf 是否已赋值
                     * @return OnlySelf 是否已赋值
                     * 
                     */
                    bool OnlySelfHasBeenSet() const;

                private:

                    /**
                     * 分页Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 词库名称或者UIN检索
                     */
                    std::vector<std::string> m_specifyNames;
                    bool m_specifyNamesHasBeenSet;

                    /**
                     * 只看用户自己创建的
                     */
                    bool m_onlySelf;
                    bool m_onlySelfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETASRKEYWORDLIBLISTREQUEST_H_
