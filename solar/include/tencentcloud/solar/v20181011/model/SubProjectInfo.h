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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_SUBPROJECTINFO_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_SUBPROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * 子项目信息
                */
                class SubProjectInfo : public AbstractModel
                {
                public:
                    SubProjectInfo();
                    ~SubProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子项目id
                     * @return SubProjectId 子项目id
                     * 
                     */
                    std::string GetSubProjectId() const;

                    /**
                     * 设置子项目id
                     * @param _subProjectId 子项目id
                     * 
                     */
                    void SetSubProjectId(const std::string& _subProjectId);

                    /**
                     * 判断参数 SubProjectId 是否已赋值
                     * @return SubProjectId 是否已赋值
                     * 
                     */
                    bool SubProjectIdHasBeenSet() const;

                    /**
                     * 获取子项目名称
                     * @return SubProjectName 子项目名称
                     * 
                     */
                    std::string GetSubProjectName() const;

                    /**
                     * 设置子项目名称
                     * @param _subProjectName 子项目名称
                     * 
                     */
                    void SetSubProjectName(const std::string& _subProjectName);

                    /**
                     * 判断参数 SubProjectName 是否已赋值
                     * @return SubProjectName 是否已赋值
                     * 
                     */
                    bool SubProjectNameHasBeenSet() const;

                    /**
                     * 获取子项目状态
                     * @return SubProjectStatus 子项目状态
                     * 
                     */
                    std::string GetSubProjectStatus() const;

                    /**
                     * 设置子项目状态
                     * @param _subProjectStatus 子项目状态
                     * 
                     */
                    void SetSubProjectStatus(const std::string& _subProjectStatus);

                    /**
                     * 判断参数 SubProjectStatus 是否已赋值
                     * @return SubProjectStatus 是否已赋值
                     * 
                     */
                    bool SubProjectStatusHasBeenSet() const;

                private:

                    /**
                     * 子项目id
                     */
                    std::string m_subProjectId;
                    bool m_subProjectIdHasBeenSet;

                    /**
                     * 子项目名称
                     */
                    std::string m_subProjectName;
                    bool m_subProjectNameHasBeenSet;

                    /**
                     * 子项目状态
                     */
                    std::string m_subProjectStatus;
                    bool m_subProjectStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_SUBPROJECTINFO_H_
