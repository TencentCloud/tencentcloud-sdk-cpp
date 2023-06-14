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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONWEIGHT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONWEIGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 带有权重的函数版本
                */
                class VersionWeight : public AbstractModel
                {
                public:
                    VersionWeight();
                    ~VersionWeight() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数版本名称
                     * @return Version 函数版本名称
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置函数版本名称
                     * @param _version 函数版本名称
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取该版本的权重
                     * @return Weight 该版本的权重
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置该版本的权重
                     * @param _weight 该版本的权重
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 函数版本名称
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 该版本的权重
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_VERSIONWEIGHT_H_
