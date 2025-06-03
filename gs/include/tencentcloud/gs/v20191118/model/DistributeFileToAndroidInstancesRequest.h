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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEFILETOANDROIDINSTANCESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEFILETOANDROIDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DistributeFileToAndroidInstances请求参数结构体
                */
                class DistributeFileToAndroidInstancesRequest : public AbstractModel
                {
                public:
                    DistributeFileToAndroidInstancesRequest();
                    ~DistributeFileToAndroidInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表
                     * @return AndroidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表
                     * @param _androidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取文件下载 URL
                     * @return FileURL 文件下载 URL
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置文件下载 URL
                     * @param _fileURL 文件下载 URL
                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                    /**
                     * 获取上传目标目录，只能上传到 /sdcard/ 目录或其子目录下
                     * @return DestinationDirectory 上传目标目录，只能上传到 /sdcard/ 目录或其子目录下
                     * 
                     */
                    std::string GetDestinationDirectory() const;

                    /**
                     * 设置上传目标目录，只能上传到 /sdcard/ 目录或其子目录下
                     * @param _destinationDirectory 上传目标目录，只能上传到 /sdcard/ 目录或其子目录下
                     * 
                     */
                    void SetDestinationDirectory(const std::string& _destinationDirectory);

                    /**
                     * 判断参数 DestinationDirectory 是否已赋值
                     * @return DestinationDirectory 是否已赋值
                     * 
                     */
                    bool DestinationDirectoryHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 文件下载 URL
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                    /**
                     * 上传目标目录，只能上传到 /sdcard/ 目录或其子目录下
                     */
                    std::string m_destinationDirectory;
                    bool m_destinationDirectoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DISTRIBUTEFILETOANDROIDINSTANCESREQUEST_H_
