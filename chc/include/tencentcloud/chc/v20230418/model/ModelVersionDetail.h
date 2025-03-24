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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONDETAIL_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/TemplateOption.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 带有园区评估记录的型号详情
                */
                class ModelVersionDetail : public AbstractModel
                {
                public:
                    ModelVersionDetail();
                    ~ModelVersionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
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
                     * 获取0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * @return CheckResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * 
                     */
                    uint64_t GetCheckResult() const;

                    /**
                     * 设置0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * @param _checkResult 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     * 
                     */
                    void SetCheckResult(const uint64_t& _checkResult);

                    /**
                     * 判断参数 CheckResult 是否已赋值
                     * @return CheckResult 是否已赋值
                     * 
                     */
                    bool CheckResultHasBeenSet() const;

                    /**
                     * 获取型号各个配置项的详情
                     * @return OptionSet 型号各个配置项的详情
                     * 
                     */
                    std::vector<TemplateOption> GetOptionSet() const;

                    /**
                     * 设置型号各个配置项的详情
                     * @param _optionSet 型号各个配置项的详情
                     * 
                     */
                    void SetOptionSet(const std::vector<TemplateOption>& _optionSet);

                    /**
                     * 判断参数 OptionSet 是否已赋值
                     * @return OptionSet 是否已赋值
                     * 
                     */
                    bool OptionSetHasBeenSet() const;

                    /**
                     * 获取设备型号名称及版本
                     * @return ModelVersion 设备型号名称及版本
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置设备型号名称及版本
                     * @param _modelVersion 设备型号名称及版本
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                private:

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 0 代表在当前园区没评估过，1 代表完全满足IDC准入标准 2 代表存在托管风险 3 代表不满足IDC准入标准
                     */
                    uint64_t m_checkResult;
                    bool m_checkResultHasBeenSet;

                    /**
                     * 型号各个配置项的详情
                     */
                    std::vector<TemplateOption> m_optionSet;
                    bool m_optionSetHasBeenSet;

                    /**
                     * 设备型号名称及版本
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_MODELVERSIONDETAIL_H_
