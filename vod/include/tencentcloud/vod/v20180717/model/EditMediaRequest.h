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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaFileInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaStreamInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EditMedia请求参数结构体
                */
                class EditMediaRequest : public AbstractModel
                {
                public:
                    EditMediaRequest();
                    ~EditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入视频的类型，可以取的值为  File，Stream 两种。
                     * @return InputType 输入视频的类型，可以取的值为  File，Stream 两种。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置输入视频的类型，可以取的值为  File，Stream 两种。
                     * @param _inputType 输入视频的类型，可以取的值为  File，Stream 两种。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取输入的视频文件信息，当 InputType 为 File 时必填。
                     * @return FileInfos 输入的视频文件信息，当 InputType 为 File 时必填。
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置输入的视频文件信息，当 InputType 为 File 时必填。
                     * @param _fileInfos 输入的视频文件信息，当 InputType 为 File 时必填。
                     * 
                     */
                    void SetFileInfos(const std::vector<EditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取输入的流信息，当 InputType 为 Stream 时必填。
                     * @return StreamInfos 输入的流信息，当 InputType 为 Stream 时必填。
                     * 
                     */
                    std::vector<EditMediaStreamInfo> GetStreamInfos() const;

                    /**
                     * 设置输入的流信息，当 InputType 为 Stream 时必填。
                     * @param _streamInfos 输入的流信息，当 InputType 为 Stream 时必填。
                     * 
                     */
                    void SetStreamInfos(const std::vector<EditMediaStreamInfo>& _streamInfos);

                    /**
                     * 判断参数 StreamInfos 是否已赋值
                     * @return StreamInfos 是否已赋值
                     * 
                     */
                    bool StreamInfosHasBeenSet() const;

                    /**
                     * 获取编辑模板 ID，取值有 10，20，不填代表使用 10 模板。
<li>10：拼接时，以分辨率最高的输入为基准；</li>
<li>20：拼接时，以码率最高的输入为基准。</li>
                     * @return Definition 编辑模板 ID，取值有 10，20，不填代表使用 10 模板。
<li>10：拼接时，以分辨率最高的输入为基准；</li>
<li>20：拼接时，以码率最高的输入为基准。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置编辑模板 ID，取值有 10，20，不填代表使用 10 模板。
<li>10：拼接时，以分辨率最高的输入为基准；</li>
<li>20：拼接时，以码率最高的输入为基准。</li>
                     * @param _definition 编辑模板 ID，取值有 10，20，不填代表使用 10 模板。
<li>10：拼接时，以分辨率最高的输入为基准；</li>
<li>20：拼接时，以码率最高的输入为基准。</li>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取[任务流](https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81)名称，如果要对生成的新视频执行任务流时填写。
                     * @return ProcedureName [任务流](https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81)名称，如果要对生成的新视频执行任务流时填写。
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置[任务流](https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81)名称，如果要对生成的新视频执行任务流时填写。
                     * @param _procedureName [任务流](https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81)名称，如果要对生成的新视频执行任务流时填写。
                     * 
                     */
                    void SetProcedureName(const std::string& _procedureName);

                    /**
                     * 判断参数 ProcedureName 是否已赋值
                     * @return ProcedureName 是否已赋值
                     * 
                     */
                    bool ProcedureNameHasBeenSet() const;

                    /**
                     * 获取编辑后生成的文件配置。
                     * @return OutputConfig 编辑后生成的文件配置。
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置编辑后生成的文件配置。
                     * @param _outputConfig 编辑后生成的文件配置。
                     * 
                     */
                    void SetOutputConfig(const EditMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取标识来源上下文，用于透传用户请求信息，在EditMediaComplete回调和任务流状态变更回调将返回该字段值，最长 1000个字符。
                     * @return SessionContext 标识来源上下文，用于透传用户请求信息，在EditMediaComplete回调和任务流状态变更回调将返回该字段值，最长 1000个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置标识来源上下文，用于透传用户请求信息，在EditMediaComplete回调和任务流状态变更回调将返回该字段值，最长 1000个字符。
                     * @param _sessionContext 标识来源上下文，用于透传用户请求信息，在EditMediaComplete回调和任务流状态变更回调将返回该字段值，最长 1000个字符。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _tasksPriority 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取保留字段，特殊用途时使用。
                     * @return ExtInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。
                     * @param _extInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 输入视频的类型，可以取的值为  File，Stream 两种。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 输入的视频文件信息，当 InputType 为 File 时必填。
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 输入的流信息，当 InputType 为 Stream 时必填。
                     */
                    std::vector<EditMediaStreamInfo> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * 编辑模板 ID，取值有 10，20，不填代表使用 10 模板。
<li>10：拼接时，以分辨率最高的输入为基准；</li>
<li>20：拼接时，以码率最高的输入为基准。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * [任务流](https://cloud.tencent.com/document/product/266/33475#.E4.BB.BB.E5.8A.A1.E6.B5.81)名称，如果要对生成的新视频执行任务流时填写。
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * 编辑后生成的文件配置。
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 标识来源上下文，用于透传用户请求信息，在EditMediaComplete回调和任务流状态变更回调将返回该字段值，最长 1000个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 用于任务去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_
