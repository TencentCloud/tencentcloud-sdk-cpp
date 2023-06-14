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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_CHARTHISTOGRAM_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_CHARTHISTOGRAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sslpod/v20190605/model/ChartNameValue.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 直方图数据结构
                */
                class ChartHistogram : public AbstractModel
                {
                public:
                    ChartHistogram();
                    ~ChartHistogram() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目名
                     * @return Name 项目名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名
                     * @param _name 项目名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取项目值
                     * @return Children 项目值
                     * 
                     */
                    std::vector<ChartNameValue> GetChildren() const;

                    /**
                     * 设置项目值
                     * @param _children 项目值
                     * 
                     */
                    void SetChildren(const std::vector<ChartNameValue>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 项目名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 项目值
                     */
                    std::vector<ChartNameValue> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_CHARTHISTOGRAM_H_
