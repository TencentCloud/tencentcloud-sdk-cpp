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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSXOPTIONOVERVIEW_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSXOPTIONOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * GooseFSx存储选项概览信息。
                */
                class GooseFSxOptionOverview : public AbstractModel
                {
                public:
                    GooseFSxOptionOverview();
                    ~GooseFSxOptionOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件系统master的ip和端口列表。
                     * @return Masters 文件系统master的ip和端口列表。
                     * 
                     */
                    std::vector<std::string> GetMasters() const;

                    /**
                     * 设置文件系统master的ip和端口列表。
                     * @param _masters 文件系统master的ip和端口列表。
                     * 
                     */
                    void SetMasters(const std::vector<std::string>& _masters);

                    /**
                     * 判断参数 Masters 是否已赋值
                     * @return Masters 是否已赋值
                     * 
                     */
                    bool MastersHasBeenSet() const;

                    /**
                     * 获取文件系统的本地挂载路径。GooseFSx目前只支持挂载在/goosefsx/{文件系统ID}_proxy/目录下。
                     * @return LocalPath 文件系统的本地挂载路径。GooseFSx目前只支持挂载在/goosefsx/{文件系统ID}_proxy/目录下。
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置文件系统的本地挂载路径。GooseFSx目前只支持挂载在/goosefsx/{文件系统ID}_proxy/目录下。
                     * @param _localPath 文件系统的本地挂载路径。GooseFSx目前只支持挂载在/goosefsx/{文件系统ID}_proxy/目录下。
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                private:

                    /**
                     * 文件系统master的ip和端口列表。
                     */
                    std::vector<std::string> m_masters;
                    bool m_mastersHasBeenSet;

                    /**
                     * 文件系统的本地挂载路径。GooseFSx目前只支持挂载在/goosefsx/{文件系统ID}_proxy/目录下。
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_GOOSEFSXOPTIONOVERVIEW_H_
