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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONLIST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/ApplicationInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 应用列表
                */
                class ApplicationList : public AbstractModel
                {
                public:
                    ApplicationList();
                    ~ApplicationList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用列表
                     * @return ApplicationInfoList 应用列表
                     * 
                     */
                    std::vector<ApplicationInfo> GetApplicationInfoList() const;

                    /**
                     * 设置应用列表
                     * @param _applicationInfoList 应用列表
                     * 
                     */
                    void SetApplicationInfoList(const std::vector<ApplicationInfo>& _applicationInfoList);

                    /**
                     * 判断参数 ApplicationInfoList 是否已赋值
                     * @return ApplicationInfoList 是否已赋值
                     * 
                     */
                    bool ApplicationInfoListHasBeenSet() const;

                    /**
                     * 获取当前查询条件命中的数据总条数
                     * @return TotalCount 当前查询条件命中的数据总条数
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 设置当前查询条件命中的数据总条数
                     * @param _totalCount 当前查询条件命中的数据总条数
                     * 
                     */
                    void SetTotalCount(const std::string& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 应用列表
                     */
                    std::vector<ApplicationInfo> m_applicationInfoList;
                    bool m_applicationInfoListHasBeenSet;

                    /**
                     * 当前查询条件命中的数据总条数
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APPLICATIONLIST_H_
