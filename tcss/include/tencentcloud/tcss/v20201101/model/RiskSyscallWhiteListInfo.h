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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_

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
                * 高危系统调用白名单信息
                */
                class RiskSyscallWhiteListInfo : public AbstractModel
                {
                public:
                    RiskSyscallWhiteListInfo();
                    ~RiskSyscallWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像id数组，为空代表全部
                     * @return ImageIds 镜像id数组，为空代表全部
                     * 
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置镜像id数组，为空代表全部
                     * @param _imageIds 镜像id数组，为空代表全部
                     * 
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取系统调用名称，通过DescribeRiskSyscallNames接口获取枚举列表
                     * @return SyscallNames 系统调用名称，通过DescribeRiskSyscallNames接口获取枚举列表
                     * 
                     */
                    std::vector<std::string> GetSyscallNames() const;

                    /**
                     * 设置系统调用名称，通过DescribeRiskSyscallNames接口获取枚举列表
                     * @param _syscallNames 系统调用名称，通过DescribeRiskSyscallNames接口获取枚举列表
                     * 
                     */
                    void SetSyscallNames(const std::vector<std::string>& _syscallNames);

                    /**
                     * 判断参数 SyscallNames 是否已赋值
                     * @return SyscallNames 是否已赋值
                     * 
                     */
                    bool SyscallNamesHasBeenSet() const;

                    /**
                     * 获取目标进程
                     * @return ProcessPath 目标进程
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置目标进程
                     * @param _processPath 目标进程
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取白名单id，如果新建则id为空
                     * @return Id 白名单id，如果新建则id为空
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置白名单id，如果新建则id为空
                     * @param _id 白名单id，如果新建则id为空
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 镜像id数组，为空代表全部
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 系统调用名称，通过DescribeRiskSyscallNames接口获取枚举列表
                     */
                    std::vector<std::string> m_syscallNames;
                    bool m_syscallNamesHasBeenSet;

                    /**
                     * 目标进程
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 白名单id，如果新建则id为空
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RISKSYSCALLWHITELISTINFO_H_
