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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/FrameworkVersion.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 框架信息列表
                */
                class FrameworkInfo : public AbstractModel
                {
                public:
                    FrameworkInfo();
                    ~FrameworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取框架名称
                     * @return Name 框架名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置框架名称
                     * @param _name 框架名称
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
                     * 获取框架版本以及对应的训练模式
                     * @return VersionInfos 框架版本以及对应的训练模式
                     * 
                     */
                    std::vector<FrameworkVersion> GetVersionInfos() const;

                    /**
                     * 设置框架版本以及对应的训练模式
                     * @param _versionInfos 框架版本以及对应的训练模式
                     * 
                     */
                    void SetVersionInfos(const std::vector<FrameworkVersion>& _versionInfos);

                    /**
                     * 判断参数 VersionInfos 是否已赋值
                     * @return VersionInfos 是否已赋值
                     * 
                     */
                    bool VersionInfosHasBeenSet() const;

                private:

                    /**
                     * 框架名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 框架版本以及对应的训练模式
                     */
                    std::vector<FrameworkVersion> m_versionInfos;
                    bool m_versionInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_FRAMEWORKINFO_H_
