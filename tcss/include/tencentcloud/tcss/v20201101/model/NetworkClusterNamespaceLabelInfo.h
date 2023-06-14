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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERNAMESPACELABELINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERNAMESPACELABELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 网络集群网络空间标签返回的结构体
                */
                class NetworkClusterNamespaceLabelInfo : public AbstractModel
                {
                public:
                    NetworkClusterNamespaceLabelInfo();
                    ~NetworkClusterNamespaceLabelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络空间标签
                     * @return Labels 网络空间标签
                     * 
                     */
                    std::string GetLabels() const;

                    /**
                     * 设置网络空间标签
                     * @param _labels 网络空间标签
                     * 
                     */
                    void SetLabels(const std::string& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取网络空间名字
                     * @return Name 网络空间名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网络空间名字
                     * @param _name 网络空间名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 网络空间标签
                     */
                    std::string m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 网络空间名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_NETWORKCLUSTERNAMESPACELABELINFO_H_
