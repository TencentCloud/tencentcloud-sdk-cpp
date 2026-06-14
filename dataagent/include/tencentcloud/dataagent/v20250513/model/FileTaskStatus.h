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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILETASKSTATUS_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILETASKSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 文件任务状态
                */
                class FileTaskStatus : public AbstractModel
                {
                public:
                    FileTaskStatus();
                    ~FileTaskStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件id</p>
                     * @return FileId <p>文件id</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件id</p>
                     * @param _fileId <p>文件id</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 处理中</li><li>1： 可用</li><li>-1： 错误</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 处理中</li><li>1： 可用</li><li>-1： 错误</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 处理中</li><li>1： 可用</li><li>-1： 错误</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 处理中</li><li>1： 可用</li><li>-1： 错误</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否已拉取过状态</p><p>枚举值：</p><ul><li>0： 未被拉取过状态</li><li>1： 已被拉取过状态</li></ul>
                     * @return IsTerminated <p>是否已拉取过状态</p><p>枚举值：</p><ul><li>0： 未被拉取过状态</li><li>1： 已被拉取过状态</li></ul>
                     * 
                     */
                    uint64_t GetIsTerminated() const;

                    /**
                     * 设置<p>是否已拉取过状态</p><p>枚举值：</p><ul><li>0： 未被拉取过状态</li><li>1： 已被拉取过状态</li></ul>
                     * @param _isTerminated <p>是否已拉取过状态</p><p>枚举值：</p><ul><li>0： 未被拉取过状态</li><li>1： 已被拉取过状态</li></ul>
                     * 
                     */
                    void SetIsTerminated(const uint64_t& _isTerminated);

                    /**
                     * 判断参数 IsTerminated 是否已赋值
                     * @return IsTerminated 是否已赋值
                     * 
                     */
                    bool IsTerminatedHasBeenSet() const;

                    /**
                     * 获取<p>错误信息，状态-1时不为空</p>
                     * @return ErrorMsg <p>错误信息，状态-1时不为空</p>
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置<p>错误信息，状态-1时不为空</p>
                     * @param _errorMsg <p>错误信息，状态-1时不为空</p>
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * <p>文件id</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 处理中</li><li>1： 可用</li><li>-1： 错误</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否已拉取过状态</p><p>枚举值：</p><ul><li>0： 未被拉取过状态</li><li>1： 已被拉取过状态</li></ul>
                     */
                    uint64_t m_isTerminated;
                    bool m_isTerminatedHasBeenSet;

                    /**
                     * <p>错误信息，状态-1时不为空</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_FILETASKSTATUS_H_
