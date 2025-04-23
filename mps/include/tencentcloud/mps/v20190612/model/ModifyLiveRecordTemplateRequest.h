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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/HLSConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/MP4ConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyLiveRecordTemplate请求参数结构体
                */
                class ModifyLiveRecordTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLiveRecordTemplateRequest();
                    ~ModifyLiveRecordTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制模板唯一标识。
                     * @return Definition 录制模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置录制模板唯一标识。
                     * @param _definition 录制模板唯一标识。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取HLS配置参数，和MP4Configure需要二选一必填。
                     * @return HLSConfigure HLS配置参数，和MP4Configure需要二选一必填。
                     * 
                     */
                    HLSConfigureInfo GetHLSConfigure() const;

                    /**
                     * 设置HLS配置参数，和MP4Configure需要二选一必填。
                     * @param _hLSConfigure HLS配置参数，和MP4Configure需要二选一必填。
                     * 
                     */
                    void SetHLSConfigure(const HLSConfigureInfo& _hLSConfigure);

                    /**
                     * 判断参数 HLSConfigure 是否已赋值
                     * @return HLSConfigure 是否已赋值
                     * 
                     */
                    bool HLSConfigureHasBeenSet() const;

                    /**
                     * 获取MP4配置参数，和HLSConfigure需要二选一必填。
                     * @return MP4Configure MP4配置参数，和HLSConfigure需要二选一必填。
                     * 
                     */
                    MP4ConfigureInfo GetMP4Configure() const;

                    /**
                     * 设置MP4配置参数，和HLSConfigure需要二选一必填。
                     * @param _mP4Configure MP4配置参数，和HLSConfigure需要二选一必填。
                     * 
                     */
                    void SetMP4Configure(const MP4ConfigureInfo& _mP4Configure);

                    /**
                     * 判断参数 MP4Configure 是否已赋值
                     * @return MP4Configure 是否已赋值
                     * 
                     */
                    bool MP4ConfigureHasBeenSet() const;

                    /**
                     * 获取录制模板名称，长度限制：64 个字符。
                     * @return Name 录制模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置录制模板名称，长度限制：64 个字符。
                     * @param _name 录制模板名称，长度限制：64 个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param _comment 模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * 录制模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * HLS配置参数，和MP4Configure需要二选一必填。
                     */
                    HLSConfigureInfo m_hLSConfigure;
                    bool m_hLSConfigureHasBeenSet;

                    /**
                     * MP4配置参数，和HLSConfigure需要二选一必填。
                     */
                    MP4ConfigureInfo m_mP4Configure;
                    bool m_mP4ConfigureHasBeenSet;

                    /**
                     * 录制模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYLIVERECORDTEMPLATEREQUEST_H_
