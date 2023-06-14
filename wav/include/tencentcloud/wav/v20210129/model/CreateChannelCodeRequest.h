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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CREATECHANNELCODEREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CREATECHANNELCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/WeComTagDetail.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * CreateChannelCode请求参数结构体
                */
                class CreateChannelCodeRequest : public AbstractModel
                {
                public:
                    CreateChannelCodeRequest();
                    ~CreateChannelCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取欢迎语类型:0普通欢迎语,1渠道欢迎语
                     * @return Type 欢迎语类型:0普通欢迎语,1渠道欢迎语
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置欢迎语类型:0普通欢迎语,1渠道欢迎语
                     * @param _type 欢迎语类型:0普通欢迎语,1渠道欢迎语
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取使用成员用户id集
                     * @return UseUserId 使用成员用户id集
                     * 
                     */
                    std::vector<int64_t> GetUseUserId() const;

                    /**
                     * 设置使用成员用户id集
                     * @param _useUserId 使用成员用户id集
                     * 
                     */
                    void SetUseUserId(const std::vector<int64_t>& _useUserId);

                    /**
                     * 判断参数 UseUserId 是否已赋值
                     * @return UseUserId 是否已赋值
                     * 
                     */
                    bool UseUserIdHasBeenSet() const;

                    /**
                     * 获取使用成员企微账号id集
                     * @return UseUserOpenId 使用成员企微账号id集
                     * 
                     */
                    std::vector<std::string> GetUseUserOpenId() const;

                    /**
                     * 设置使用成员企微账号id集
                     * @param _useUserOpenId 使用成员企微账号id集
                     * 
                     */
                    void SetUseUserOpenId(const std::vector<std::string>& _useUserOpenId);

                    /**
                     * 判断参数 UseUserOpenId 是否已赋值
                     * @return UseUserOpenId 是否已赋值
                     * 
                     */
                    bool UseUserOpenIdHasBeenSet() const;

                    /**
                     * 获取应用ID,字典表中的APP_TYPE值,多个已逗号分隔
                     * @return AppIds 应用ID,字典表中的APP_TYPE值,多个已逗号分隔
                     * 
                     */
                    std::string GetAppIds() const;

                    /**
                     * 设置应用ID,字典表中的APP_TYPE值,多个已逗号分隔
                     * @param _appIds 应用ID,字典表中的APP_TYPE值,多个已逗号分隔
                     * 
                     */
                    void SetAppIds(const std::string& _appIds);

                    /**
                     * 判断参数 AppIds 是否已赋值
                     * @return AppIds 是否已赋值
                     * 
                     */
                    bool AppIdsHasBeenSet() const;

                    /**
                     * 获取渠道来源
                     * @return Source 渠道来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置渠道来源
                     * @param _source 渠道来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取渠道来源名称
                     * @return SourceName 渠道来源名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置渠道来源名称
                     * @param _sourceName 渠道来源名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取二维码名称
                     * @return Name 二维码名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置二维码名称
                     * @param _name 二维码名称
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
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<WeComTagDetail> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
                     * 
                     */
                    void SetTag(const std::vector<WeComTagDetail>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取自动通过好友：0开启 1关闭, 默认开启
                     * @return SkipVerify 自动通过好友：0开启 1关闭, 默认开启
                     * 
                     */
                    int64_t GetSkipVerify() const;

                    /**
                     * 设置自动通过好友：0开启 1关闭, 默认开启
                     * @param _skipVerify 自动通过好友：0开启 1关闭, 默认开启
                     * 
                     */
                    void SetSkipVerify(const int64_t& _skipVerify);

                    /**
                     * 判断参数 SkipVerify 是否已赋值
                     * @return SkipVerify 是否已赋值
                     * 
                     */
                    bool SkipVerifyHasBeenSet() const;

                    /**
                     * 获取欢迎语id（通过欢迎语新增返回的id）
                     * @return MsgId 欢迎语id（通过欢迎语新增返回的id）
                     * 
                     */
                    int64_t GetMsgId() const;

                    /**
                     * 设置欢迎语id（通过欢迎语新增返回的id）
                     * @param _msgId 欢迎语id（通过欢迎语新增返回的id）
                     * 
                     */
                    void SetMsgId(const int64_t& _msgId);

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
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
                     * 获取渠道类型 0 未知 1 公域 2私域
                     * @return SourceType 渠道类型 0 未知 1 公域 2私域
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置渠道类型 0 未知 1 公域 2私域
                     * @param _sourceType 渠道类型 0 未知 1 公域 2私域
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * 欢迎语类型:0普通欢迎语,1渠道欢迎语
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 使用成员用户id集
                     */
                    std::vector<int64_t> m_useUserId;
                    bool m_useUserIdHasBeenSet;

                    /**
                     * 使用成员企微账号id集
                     */
                    std::vector<std::string> m_useUserOpenId;
                    bool m_useUserOpenIdHasBeenSet;

                    /**
                     * 应用ID,字典表中的APP_TYPE值,多个已逗号分隔
                     */
                    std::string m_appIds;
                    bool m_appIdsHasBeenSet;

                    /**
                     * 渠道来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 渠道来源名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 二维码名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<WeComTagDetail> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 自动通过好友：0开启 1关闭, 默认开启
                     */
                    int64_t m_skipVerify;
                    bool m_skipVerifyHasBeenSet;

                    /**
                     * 欢迎语id（通过欢迎语新增返回的id）
                     */
                    int64_t m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 渠道类型 0 未知 1 公域 2私域
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CREATECHANNELCODEREQUEST_H_
