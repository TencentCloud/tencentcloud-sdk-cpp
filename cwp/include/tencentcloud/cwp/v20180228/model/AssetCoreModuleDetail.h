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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetCoreModuleParam.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 资产管理内核模块详情
                */
                class AssetCoreModuleDetail : public AbstractModel
                {
                public:
                    AssetCoreModuleDetail();
                    ~AssetCoreModuleDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取路径
                     * @return Path 路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
                     * @param _path 路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

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

                    /**
                     * 获取大小
                     * @return Size 大小
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置大小
                     * @param _size 大小
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取依赖进程
                     * @return Processes 依赖进程
                     * 
                     */
                    std::string GetProcesses() const;

                    /**
                     * 设置依赖进程
                     * @param _processes 依赖进程
                     * 
                     */
                    void SetProcesses(const std::string& _processes);

                    /**
                     * 判断参数 Processes 是否已赋值
                     * @return Processes 是否已赋值
                     * 
                     */
                    bool ProcessesHasBeenSet() const;

                    /**
                     * 获取被依赖模块
                     * @return Modules 被依赖模块
                     * 
                     */
                    std::string GetModules() const;

                    /**
                     * 设置被依赖模块
                     * @param _modules 被依赖模块
                     * 
                     */
                    void SetModules(const std::string& _modules);

                    /**
                     * 判断参数 Modules 是否已赋值
                     * @return Modules 是否已赋值
                     * 
                     */
                    bool ModulesHasBeenSet() const;

                    /**
                     * 获取参数信息
                     * @return Params 参数信息
                     * 
                     */
                    std::vector<AssetCoreModuleParam> GetParams() const;

                    /**
                     * 设置参数信息
                     * @param _params 参数信息
                     * 
                     */
                    void SetParams(const std::vector<AssetCoreModuleParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取数据更新时间
                     * @return UpdateTime 数据更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据更新时间
                     * @param _updateTime 数据更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 大小
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 依赖进程
                     */
                    std::string m_processes;
                    bool m_processesHasBeenSet;

                    /**
                     * 被依赖模块
                     */
                    std::string m_modules;
                    bool m_modulesHasBeenSet;

                    /**
                     * 参数信息
                     */
                    std::vector<AssetCoreModuleParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 数据更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ASSETCOREMODULEDETAIL_H_
