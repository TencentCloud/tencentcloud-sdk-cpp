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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_

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
                class ReverseShellWhiteListInfo : public AbstractModel
                {
                public:
                    ReverseShellWhiteListInfo();
                    ~ReverseShellWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标IP
                     * @return DstIp 目标IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP
                     * @param _dstIp 目标IP
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
                     * 获取目标进程
                     * @return ProcessName 目标进程
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置目标进程
                     * @param _processName 目标进程
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
                     * 目标IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标端口
                     */
                    std::string m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 目标进程
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 镜像id数组，为空代表全部
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_REVERSESHELLWHITELISTINFO_H_
