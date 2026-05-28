/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_COSOPTION_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_COSOPTION_H_

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
                * COS挂载信息
                */
                class CosOption : public AbstractModel
                {
                public:
                    CosOption();
                    ~CosOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件系统本地挂载路径。</p>
                     * @return LocalPath <p>文件系统本地挂载路径。</p>
                     * 
                     */
                    std::string GetLocalPath() const;

                    /**
                     * 设置<p>文件系统本地挂载路径。</p>
                     * @param _localPath <p>文件系统本地挂载路径。</p>
                     * 
                     */
                    void SetLocalPath(const std::string& _localPath);

                    /**
                     * 判断参数 LocalPath 是否已赋值
                     * @return LocalPath 是否已赋值
                     * 
                     */
                    bool LocalPathHasBeenSet() const;

                    /**
                     * 获取<p>COS桶地址，可以在COS桶详情页查看。</p>
                     * @return RemotePath <p>COS桶地址，可以在COS桶详情页查看。</p>
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置<p>COS桶地址，可以在COS桶详情页查看。</p>
                     * @param _remotePath <p>COS桶地址，可以在COS桶详情页查看。</p>
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取<p>cosfs2挂载工具支持的参数。</p>
                     * @return MountParamsOption <p>cosfs2挂载工具支持的参数。</p>
                     * 
                     */
                    std::string GetMountParamsOption() const;

                    /**
                     * 设置<p>cosfs2挂载工具支持的参数。</p>
                     * @param _mountParamsOption <p>cosfs2挂载工具支持的参数。</p>
                     * 
                     */
                    void SetMountParamsOption(const std::string& _mountParamsOption);

                    /**
                     * 判断参数 MountParamsOption 是否已赋值
                     * @return MountParamsOption 是否已赋值
                     * 
                     */
                    bool MountParamsOptionHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统本地挂载路径。</p>
                     */
                    std::string m_localPath;
                    bool m_localPathHasBeenSet;

                    /**
                     * <p>COS桶地址，可以在COS桶详情页查看。</p>
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * <p>cosfs2挂载工具支持的参数。</p>
                     */
                    std::string m_mountParamsOption;
                    bool m_mountParamsOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_COSOPTION_H_
