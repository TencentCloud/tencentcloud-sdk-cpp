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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApplicationForPage.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 应用分页信息
                */
                class TsfPageApplication : public AbstractModel
                {
                public:
                    TsfPageApplication();
                    ~TsfPageApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用总数目
                     * @return TotalCount 应用总数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置应用总数目
                     * @param _totalCount 应用总数目
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
                     * 获取应用信息列表
                     * @return Content 应用信息列表
                     * 
                     */
                    std::vector<ApplicationForPage> GetContent() const;

                    /**
                     * 设置应用信息列表
                     * @param _content 应用信息列表
                     * 
                     */
                    void SetContent(const std::vector<ApplicationForPage>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取获取部署组实例列表返回的原始批次个数
                     * @return SpecTotalCount 获取部署组实例列表返回的原始批次个数
                     * 
                     */
                    int64_t GetSpecTotalCount() const;

                    /**
                     * 设置获取部署组实例列表返回的原始批次个数
                     * @param _specTotalCount 获取部署组实例列表返回的原始批次个数
                     * 
                     */
                    void SetSpecTotalCount(const int64_t& _specTotalCount);

                    /**
                     * 判断参数 SpecTotalCount 是否已赋值
                     * @return SpecTotalCount 是否已赋值
                     * 
                     */
                    bool SpecTotalCountHasBeenSet() const;

                private:

                    /**
                     * 应用总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 应用信息列表
                     */
                    std::vector<ApplicationForPage> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 获取部署组实例列表返回的原始批次个数
                     */
                    int64_t m_specTotalCount;
                    bool m_specTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEAPPLICATION_H_
