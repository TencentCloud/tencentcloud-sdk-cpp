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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEQUERYOPTION_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEQUERYOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据源模糊查询参数
                */
                class DataSourceQueryOption : public AbstractModel
                {
                public:
                    DataSourceQueryOption();
                    ~DataSourceQueryOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源标识模糊匹配
                     * @return LikeName 数据源标识模糊匹配
                     * 
                     */
                    std::string GetLikeName() const;

                    /**
                     * 设置数据源标识模糊匹配
                     * @param _likeName 数据源标识模糊匹配
                     * 
                     */
                    void SetLikeName(const std::string& _likeName);

                    /**
                     * 判断参数 LikeName 是否已赋值
                     * @return LikeName 是否已赋值
                     * 
                     */
                    bool LikeNameHasBeenSet() const;

                    /**
                     * 获取数据源名称模糊匹配
                     * @return LikeTitle 数据源名称模糊匹配
                     * 
                     */
                    std::string GetLikeTitle() const;

                    /**
                     * 设置数据源名称模糊匹配
                     * @param _likeTitle 数据源名称模糊匹配
                     * 
                     */
                    void SetLikeTitle(const std::string& _likeTitle);

                    /**
                     * 判断参数 LikeTitle 是否已赋值
                     * @return LikeTitle 是否已赋值
                     * 
                     */
                    bool LikeTitleHasBeenSet() const;

                private:

                    /**
                     * 数据源标识模糊匹配
                     */
                    std::string m_likeName;
                    bool m_likeNameHasBeenSet;

                    /**
                     * 数据源名称模糊匹配
                     */
                    std::string m_likeTitle;
                    bool m_likeTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DATASOURCEQUERYOPTION_H_
