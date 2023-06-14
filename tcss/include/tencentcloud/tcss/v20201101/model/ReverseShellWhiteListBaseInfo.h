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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTBASEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTBASEINFO_H_

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
                * 反弹shell白名单信息
                */
                class ReverseShellWhiteListBaseInfo : public AbstractModel
                {
                public:
                    ReverseShellWhiteListBaseInfo();
                    ~ReverseShellWhiteListBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白名单id
                     * @return Id 白名单id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置白名单id
                     * @param _id 白名单id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取镜像数量
                     * @return ImageCount 镜像数量
                     * 
                     */
                    uint64_t GetImageCount() const;

                    /**
                     * 设置镜像数量
                     * @param _imageCount 镜像数量
                     * 
                     */
                    void SetImageCount(const uint64_t& _imageCount);

                    /**
                     * 判断参数 ImageCount 是否已赋值
                     * @return ImageCount 是否已赋值
                     * 
                     */
                    bool ImageCountHasBeenSet() const;

                    /**
                     * 获取连接进程名字
                     * @return ProcessName 连接进程名字
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置连接进程名字
                     * @param _processName 连接进程名字
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取目标地址ip
                     * @return DstIp 目标地址ip
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标地址ip
                     * @param _dstIp 目标地址ip
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DstPort 目标端口
                     * 
                     */
                    std::string GetDstPort() const;

                    /**
                     * 设置目标端口
                     * @param _dstPort 目标端口
                     * 
                     */
                    void SetDstPort(const std::string& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取是否是全局白名单，true全局
                     * @return IsGlobal 是否是全局白名单，true全局
                     * 
                     */
                    bool GetIsGlobal() const;

                    /**
                     * 设置是否是全局白名单，true全局
                     * @param _isGlobal 是否是全局白名单，true全局
                     * 
                     */
                    void SetIsGlobal(const bool& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

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

                private:

                    /**
                     * 白名单id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 镜像数量
                     */
                    uint64_t m_imageCount;
                    bool m_imageCountHasBeenSet;

                    /**
                     * 连接进程名字
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 目标地址ip
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 目标端口
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 是否是全局白名单，true全局
                     */
                    bool m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                    /**
                     * 镜像id数组，为空代表全部
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTBASEINFO_H_
