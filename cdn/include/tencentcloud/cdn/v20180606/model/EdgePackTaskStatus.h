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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKSTATUS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 动态打包任务状态
                */
                class EdgePackTaskStatus : public AbstractModel
                {
                public:
                    EdgePackTaskStatus();
                    ~EdgePackTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取APK 名称
                     * @return Apk APK 名称
                     * 
                     */
                    std::string GetApk() const;

                    /**
                     * 设置APK 名称
                     * @param _apk APK 名称
                     * 
                     */
                    void SetApk(const std::string& _apk);

                    /**
                     * 判断参数 Apk 是否已赋值
                     * @return Apk 是否已赋值
                     * 
                     */
                    bool ApkHasBeenSet() const;

                    /**
                     * 获取输出目录
                     * @return DstDir 输出目录
                     * 
                     */
                    std::string GetDstDir() const;

                    /**
                     * 设置输出目录
                     * @param _dstDir 输出目录
                     * 
                     */
                    void SetDstDir(const std::string& _dstDir);

                    /**
                     * 判断参数 DstDir 是否已赋值
                     * @return DstDir 是否已赋值
                     * 
                     */
                    bool DstDirHasBeenSet() const;

                    /**
                     * 获取上传时间
                     * @return UploadTime 上传时间
                     * 
                     */
                    std::string GetUploadTime() const;

                    /**
                     * 设置上传时间
                     * @param _uploadTime 上传时间
                     * 
                     */
                    void SetUploadTime(const std::string& _uploadTime);

                    /**
                     * 判断参数 UploadTime 是否已赋值
                     * @return UploadTime 是否已赋值
                     * 
                     */
                    bool UploadTimeHasBeenSet() const;

                    /**
                     * 获取任务状态
created: 创建成功
processing: 处理中
done: 处理完成
failed: 处理失败
                     * @return Status 任务状态
created: 创建成功
processing: 处理中
done: 处理完成
failed: 处理失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
created: 创建成功
processing: 处理中
done: 处理完成
failed: 处理失败
                     * @param _status 任务状态
created: 创建成功
processing: 处理中
done: 处理完成
failed: 处理失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取上传目录
                     * @return SrcDir 上传目录
                     * 
                     */
                    std::vector<std::string> GetSrcDir() const;

                    /**
                     * 设置上传目录
                     * @param _srcDir 上传目录
                     * 
                     */
                    void SetSrcDir(const std::vector<std::string>& _srcDir);

                    /**
                     * 判断参数 SrcDir 是否已赋值
                     * @return SrcDir 是否已赋值
                     * 
                     */
                    bool SrcDirHasBeenSet() const;

                    /**
                     * 获取失败任务状态详情
                     * @return StatusDesc 失败任务状态详情
                     * 
                     */
                    std::string GetStatusDesc() const;

                    /**
                     * 设置失败任务状态详情
                     * @param _statusDesc 失败任务状态详情
                     * 
                     */
                    void SetStatusDesc(const std::string& _statusDesc);

                    /**
                     * 判断参数 StatusDesc 是否已赋值
                     * @return StatusDesc 是否已赋值
                     * 
                     */
                    bool StatusDescHasBeenSet() const;

                private:

                    /**
                     * APK 名称
                     */
                    std::string m_apk;
                    bool m_apkHasBeenSet;

                    /**
                     * 输出目录
                     */
                    std::string m_dstDir;
                    bool m_dstDirHasBeenSet;

                    /**
                     * 上传时间
                     */
                    std::string m_uploadTime;
                    bool m_uploadTimeHasBeenSet;

                    /**
                     * 任务状态
created: 创建成功
processing: 处理中
done: 处理完成
failed: 处理失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 上传目录
                     */
                    std::vector<std::string> m_srcDir;
                    bool m_srcDirHasBeenSet;

                    /**
                     * 失败任务状态详情
                     */
                    std::string m_statusDesc;
                    bool m_statusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_EDGEPACKTASKSTATUS_H_
