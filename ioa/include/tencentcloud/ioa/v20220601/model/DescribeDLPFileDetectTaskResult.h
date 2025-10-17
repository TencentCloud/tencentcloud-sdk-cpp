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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULT_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 查询文件检测结果响应数据
                */
                class DescribeDLPFileDetectTaskResult : public AbstractModel
                {
                public:
                    DescribeDLPFileDetectTaskResult();
                    ~DescribeDLPFileDetectTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提交任务时的文件md5
                     * @return FileMd5 提交任务时的文件md5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置提交任务时的文件md5
                     * @param _fileMd5 提交任务时的文件md5
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
                     * 获取提交任务时的文件名
                     * @return FileName 提交任务时的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置提交任务时的文件名
                     * @param _fileName 提交任务时的文件名
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
                     * 获取检测执行状态：0未执行 1等待执行 2执行中 3执行失败 4执行完成 
                     * @return Status 检测执行状态：0未执行 1等待执行 2执行中 3执行失败 4执行完成 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置检测执行状态：0未执行 1等待执行 2执行中 3执行失败 4执行完成 
                     * @param _status 检测执行状态：0未执行 1等待执行 2执行中 3执行失败 4执行完成 
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
                     * 获取    FileAbstract:文件摘要
    FileAttr:文件属性
    FileCategory:命中分级分类 array
    FileContent:命中信息json(array)
	            RuleId:规则Id
				RuleName:规则名称
				RuleLevel:规则等级
				Hits：命中词库内容
				    LibraryId：词库Id
					LibraryType:词库类型
					LibraryName:词库名称
					Attribute: 命中属性 doc.Content文件内容|doc.FileSize文件大小|doc.Name文件名|doc.Type文件类型
					String  待匹配内容
					Content 命中内容
                HitsTotal 规则命中次数
    FileMd5 文件ND5
    FileName 文件名
    FileSize 文件大小
    FileType 文件后缀
    FileTypeName 文件类型名称
    FinalDataLevel 命中最高等级
    NodeId 节点唯一Id
    NodeIp 节点IP
    NodeName 节点名称
    OperateTime 文件操作时间
    Url 文件下载Url
                     * @return DetectResult     FileAbstract:文件摘要
    FileAttr:文件属性
    FileCategory:命中分级分类 array
    FileContent:命中信息json(array)
	            RuleId:规则Id
				RuleName:规则名称
				RuleLevel:规则等级
				Hits：命中词库内容
				    LibraryId：词库Id
					LibraryType:词库类型
					LibraryName:词库名称
					Attribute: 命中属性 doc.Content文件内容|doc.FileSize文件大小|doc.Name文件名|doc.Type文件类型
					String  待匹配内容
					Content 命中内容
                HitsTotal 规则命中次数
    FileMd5 文件ND5
    FileName 文件名
    FileSize 文件大小
    FileType 文件后缀
    FileTypeName 文件类型名称
    FinalDataLevel 命中最高等级
    NodeId 节点唯一Id
    NodeIp 节点IP
    NodeName 节点名称
    OperateTime 文件操作时间
    Url 文件下载Url
                     * 
                     */
                    std::string GetDetectResult() const;

                    /**
                     * 设置    FileAbstract:文件摘要
    FileAttr:文件属性
    FileCategory:命中分级分类 array
    FileContent:命中信息json(array)
	            RuleId:规则Id
				RuleName:规则名称
				RuleLevel:规则等级
				Hits：命中词库内容
				    LibraryId：词库Id
					LibraryType:词库类型
					LibraryName:词库名称
					Attribute: 命中属性 doc.Content文件内容|doc.FileSize文件大小|doc.Name文件名|doc.Type文件类型
					String  待匹配内容
					Content 命中内容
                HitsTotal 规则命中次数
    FileMd5 文件ND5
    FileName 文件名
    FileSize 文件大小
    FileType 文件后缀
    FileTypeName 文件类型名称
    FinalDataLevel 命中最高等级
    NodeId 节点唯一Id
    NodeIp 节点IP
    NodeName 节点名称
    OperateTime 文件操作时间
    Url 文件下载Url
                     * @param _detectResult     FileAbstract:文件摘要
    FileAttr:文件属性
    FileCategory:命中分级分类 array
    FileContent:命中信息json(array)
	            RuleId:规则Id
				RuleName:规则名称
				RuleLevel:规则等级
				Hits：命中词库内容
				    LibraryId：词库Id
					LibraryType:词库类型
					LibraryName:词库名称
					Attribute: 命中属性 doc.Content文件内容|doc.FileSize文件大小|doc.Name文件名|doc.Type文件类型
					String  待匹配内容
					Content 命中内容
                HitsTotal 规则命中次数
    FileMd5 文件ND5
    FileName 文件名
    FileSize 文件大小
    FileType 文件后缀
    FileTypeName 文件类型名称
    FinalDataLevel 命中最高等级
    NodeId 节点唯一Id
    NodeIp 节点IP
    NodeName 节点名称
    OperateTime 文件操作时间
    Url 文件下载Url
                     * 
                     */
                    void SetDetectResult(const std::string& _detectResult);

                    /**
                     * 判断参数 DetectResult 是否已赋值
                     * @return DetectResult 是否已赋值
                     * 
                     */
                    bool DetectResultHasBeenSet() const;

                    /**
                     * 获取检测执行状态描述
                     * @return Message 检测执行状态描述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置检测执行状态描述
                     * @param _message 检测执行状态描述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 提交任务时的文件md5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 提交任务时的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 检测执行状态：0未执行 1等待执行 2执行中 3执行失败 4执行完成 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     *     FileAbstract:文件摘要
    FileAttr:文件属性
    FileCategory:命中分级分类 array
    FileContent:命中信息json(array)
	            RuleId:规则Id
				RuleName:规则名称
				RuleLevel:规则等级
				Hits：命中词库内容
				    LibraryId：词库Id
					LibraryType:词库类型
					LibraryName:词库名称
					Attribute: 命中属性 doc.Content文件内容|doc.FileSize文件大小|doc.Name文件名|doc.Type文件类型
					String  待匹配内容
					Content 命中内容
                HitsTotal 规则命中次数
    FileMd5 文件ND5
    FileName 文件名
    FileSize 文件大小
    FileType 文件后缀
    FileTypeName 文件类型名称
    FinalDataLevel 命中最高等级
    NodeId 节点唯一Id
    NodeIp 节点IP
    NodeName 节点名称
    OperateTime 文件操作时间
    Url 文件下载Url
                     */
                    std::string m_detectResult;
                    bool m_detectResultHasBeenSet;

                    /**
                     * 检测执行状态描述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPFILEDETECTTASKRESULT_H_
