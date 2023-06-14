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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BUSINESSINTELLIGENCEFILE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BUSINESSINTELLIGENCEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/FileAction.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 商业智能服务文件类型
                */
                class BusinessIntelligenceFile : public AbstractModel
                {
                public:
                    BusinessIntelligenceFile();
                    ~BusinessIntelligenceFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件名称
                     * @return FileName 文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
                     * @param _fileName 文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件类型
                     * @return FileType 文件类型
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
                     * @param _fileType 文件类型
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取文件的COS_URL
                     * @return FileURL 文件的COS_URL
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置文件的COS_URL
                     * @param _fileURL 文件的COS_URL
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
                     * 获取文件在服务器上的路径
                     * @return FilePath 文件在服务器上的路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件在服务器上的路径
                     * @param _filePath 文件在服务器上的路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取文件大小，单位时Byte
                     * @return FileSize 文件大小，单位时Byte
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小，单位时Byte
                     * @param _fileSize 文件大小，单位时Byte
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件md5值
                     * @return FileMd5 文件md5值
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置文件md5值
                     * @param _fileMd5 文件md5值
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取部署文件状态 1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * @return Status 部署文件状态 1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置部署文件状态 1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * @param _status 部署文件状态 1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备注信息
                     * @return Remark 备注信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注信息
                     * @param _remark 备注信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取文件创建时间
                     * @return CreateTime 文件创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置文件创建时间
                     * @param _createTime 文件创建时间
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
                     * 获取文件部署开始时间
                     * @return StartTime 文件部署开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置文件部署开始时间
                     * @param _startTime 文件部署开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取文件部署结束时间
                     * @return EndTime 文件部署结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置文件部署结束时间
                     * @param _endTime 文件部署结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取报错信息返回
                     * @return Message 报错信息返回
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置报错信息返回
                     * @param _message 报错信息返回
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取商业智能实例ID
                     * @return InstanceId 商业智能实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置商业智能实例ID
                     * @param _instanceId 商业智能实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取动作相关信息
                     * @return Action 动作相关信息
                     * 
                     */
                    FileAction GetAction() const;

                    /**
                     * 设置动作相关信息
                     * @param _action 动作相关信息
                     * 
                     */
                    void SetAction(const FileAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件类型
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 文件的COS_URL
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                    /**
                     * 文件在服务器上的路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 文件大小，单位时Byte
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件md5值
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 部署文件状态 1-初始化待部署 2-部署中 3-部署成功 4-部署失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 文件创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件部署开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 文件部署结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 报错信息返回
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 商业智能实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 动作相关信息
                     */
                    FileAction m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BUSINESSINTELLIGENCEFILE_H_
