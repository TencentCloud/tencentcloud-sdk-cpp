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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESRSP_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/AuthorizeResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * openapi授权返回
                */
                class AuthorizePrivilegesRsp : public AbstractModel
                {
                public:
                    AuthorizePrivilegesRsp();
                    ~AuthorizePrivilegesRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量授权结果
                     * @return OverallSuccess 批量授权结果
                     * 
                     */
                    bool GetOverallSuccess() const;

                    /**
                     * 设置批量授权结果
                     * @param _overallSuccess 批量授权结果
                     * 
                     */
                    void SetOverallSuccess(const bool& _overallSuccess);

                    /**
                     * 判断参数 OverallSuccess 是否已赋值
                     * @return OverallSuccess 是否已赋值
                     * 
                     */
                    bool OverallSuccessHasBeenSet() const;

                    /**
                     * 获取授权详情列表
                     * @return Results 授权详情列表
                     * 
                     */
                    std::vector<AuthorizeResult> GetResults() const;

                    /**
                     * 设置授权详情列表
                     * @param _results 授权详情列表
                     * 
                     */
                    void SetResults(const std::vector<AuthorizeResult>& _results);

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 批量授权结果
                     */
                    bool m_overallSuccess;
                    bool m_overallSuccessHasBeenSet;

                    /**
                     * 授权详情列表
                     */
                    std::vector<AuthorizeResult> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_AUTHORIZEPRIVILEGESRSP_H_
