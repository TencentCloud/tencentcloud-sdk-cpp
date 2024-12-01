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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATIONV1_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATIONV1_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/PhysicalExamination.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告V1版本
                */
                class PhysicalExaminationV1 : public AbstractModel
                {
                public:
                    PhysicalExaminationV1();
                    ~PhysicalExaminationV1() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取体检报告信息
                     * @return PhysicalExaminationMulti 体检报告信息
                     * 
                     */
                    PhysicalExamination GetPhysicalExaminationMulti() const;

                    /**
                     * 设置体检报告信息
                     * @param _physicalExaminationMulti 体检报告信息
                     * 
                     */
                    void SetPhysicalExaminationMulti(const PhysicalExamination& _physicalExaminationMulti);

                    /**
                     * 判断参数 PhysicalExaminationMulti 是否已赋值
                     * @return PhysicalExaminationMulti 是否已赋值
                     * 
                     */
                    bool PhysicalExaminationMultiHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 体检报告信息
                     */
                    PhysicalExamination m_physicalExaminationMulti;
                    bool m_physicalExaminationMultiHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PHYSICALEXAMINATIONV1_H_
