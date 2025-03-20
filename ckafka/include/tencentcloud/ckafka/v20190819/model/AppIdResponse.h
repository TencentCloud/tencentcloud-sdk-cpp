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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * AppId的查询结果
                */
                class AppIdResponse : public AbstractModel
                {
                public:
                    AppIdResponse();
                    ~AppIdResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取符合要求的所有AppId数量
                     * @return TotalCount 符合要求的所有AppId数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置符合要求的所有AppId数量
                     * @param _totalCount 符合要求的所有AppId数量
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合要求的App Id列表
                     * @return AppIdList 符合要求的App Id列表
                     * 
                     */
                    std::vector<int64_t> GetAppIdList() const;

                    /**
                     * 设置符合要求的App Id列表
                     * @param _appIdList 符合要求的App Id列表
                     * 
                     */
                    void SetAppIdList(const std::vector<int64_t>& _appIdList);

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     * 
                     */
                    bool AppIdListHasBeenSet() const;

                private:

                    /**
                     * 符合要求的所有AppId数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合要求的App Id列表
                     */
                    std::vector<int64_t> m_appIdList;
                    bool m_appIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_APPIDRESPONSE_H_
