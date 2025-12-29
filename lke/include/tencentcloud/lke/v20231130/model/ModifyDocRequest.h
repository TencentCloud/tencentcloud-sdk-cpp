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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AttrLabelRefer.h>
#include <tencentcloud/lke/v20231130/model/UpdatePeriodInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyDoc请求参数结构体
                */
                class ModifyDocRequest : public AbstractModel
                {
                public:
                    ModifyDocRequest();
                    ~ModifyDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @return BotBizId 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * @param _botBizId 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取文档ID
                     * @return DocBizId 文档ID
                     * 
                     */
                    std::string GetDocBizId() const;

                    /**
                     * 设置文档ID
                     * @param _docBizId 文档ID
                     * 
                     */
                    void SetDocBizId(const std::string& _docBizId);

                    /**
                     * 判断参数 DocBizId 是否已赋值
                     * @return DocBizId 是否已赋值
                     * 
                     */
                    bool DocBizIdHasBeenSet() const;

                    /**
                     * 获取是否引用链接
                     * @return IsRefer 是否引用链接
                     * 
                     */
                    bool GetIsRefer() const;

                    /**
                     * 设置是否引用链接
                     * @param _isRefer 是否引用链接
                     * 
                     */
                    void SetIsRefer(const bool& _isRefer);

                    /**
                     * 判断参数 IsRefer 是否已赋值
                     * @return IsRefer 是否已赋值
                     * 
                     */
                    bool IsReferHasBeenSet() const;

                    /**
                     * 获取标签适用范围，1:全部，2:按条件。默认为1。
                     * @return AttrRange 标签适用范围，1:全部，2:按条件。默认为1。
                     * 
                     */
                    uint64_t GetAttrRange() const;

                    /**
                     * 设置标签适用范围，1:全部，2:按条件。默认为1。
                     * @param _attrRange 标签适用范围，1:全部，2:按条件。默认为1。
                     * 
                     */
                    void SetAttrRange(const uint64_t& _attrRange);

                    /**
                     * 判断参数 AttrRange 是否已赋值
                     * @return AttrRange 是否已赋值
                     * 
                     */
                    bool AttrRangeHasBeenSet() const;

                    /**
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取关联的标签
                     * @return AttrLabels 关联的标签
                     * 
                     */
                    std::vector<AttrLabelRefer> GetAttrLabels() const;

                    /**
                     * 设置关联的标签
                     * @param _attrLabels 关联的标签
                     * 
                     */
                    void SetAttrLabels(const std::vector<AttrLabelRefer>& _attrLabels);

                    /**
                     * 判断参数 AttrLabels 是否已赋值
                     * @return AttrLabels 是否已赋值
                     * 
                     */
                    bool AttrLabelsHasBeenSet() const;

                    /**
                     * 获取网页(或自定义链接)地址
                     * @return WebUrl 网页(或自定义链接)地址
                     * 
                     */
                    std::string GetWebUrl() const;

                    /**
                     * 设置网页(或自定义链接)地址
                     * @param _webUrl 网页(或自定义链接)地址
                     * 
                     */
                    void SetWebUrl(const std::string& _webUrl);

                    /**
                     * 判断参数 WebUrl 是否已赋值
                     * @return WebUrl 是否已赋值
                     * 
                     */
                    bool WebUrlHasBeenSet() const;

                    /**
                     * 获取外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * @return ReferUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * 
                     */
                    uint64_t GetReferUrlType() const;

                    /**
                     * 设置外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * @param _referUrlType 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     * 
                     */
                    void SetReferUrlType(const uint64_t& _referUrlType);

                    /**
                     * 判断参数 ReferUrlType 是否已赋值
                     * @return ReferUrlType 是否已赋值
                     * 
                     */
                    bool ReferUrlTypeHasBeenSet() const;

                    /**
                     * 获取有效开始时间，单位为unix时间戳
                     * @return ExpireStart 有效开始时间，单位为unix时间戳
                     * 
                     */
                    std::string GetExpireStart() const;

                    /**
                     * 设置有效开始时间，单位为unix时间戳
                     * @param _expireStart 有效开始时间，单位为unix时间戳
                     * 
                     */
                    void SetExpireStart(const std::string& _expireStart);

                    /**
                     * 判断参数 ExpireStart 是否已赋值
                     * @return ExpireStart 是否已赋值
                     * 
                     */
                    bool ExpireStartHasBeenSet() const;

                    /**
                     * 获取有效结束时间，单位为unix时间戳，默认值为0代表永久有效
                     * @return ExpireEnd 有效结束时间，单位为unix时间戳，默认值为0代表永久有效
                     * 
                     */
                    std::string GetExpireEnd() const;

                    /**
                     * 设置有效结束时间，单位为unix时间戳，默认值为0代表永久有效
                     * @param _expireEnd 有效结束时间，单位为unix时间戳，默认值为0代表永久有效
                     * 
                     */
                    void SetExpireEnd(const std::string& _expireEnd);

                    /**
                     * 判断参数 ExpireEnd 是否已赋值
                     * @return ExpireEnd 是否已赋值
                     * 
                     */
                    bool ExpireEndHasBeenSet() const;

                    /**
                     * 获取分类ID
                     * @return CateBizId 分类ID
                     * 
                     */
                    std::string GetCateBizId() const;

                    /**
                     * 设置分类ID
                     * @param _cateBizId 分类ID
                     * 
                     */
                    void SetCateBizId(const std::string& _cateBizId);

                    /**
                     * 判断参数 CateBizId 是否已赋值
                     * @return CateBizId 是否已赋值
                     * 
                     */
                    bool CateBizIdHasBeenSet() const;

                    /**
                     * 获取是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * @return IsDownload 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * 
                     */
                    bool GetIsDownload() const;

                    /**
                     * 设置是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * @param _isDownload 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     * 
                     */
                    void SetIsDownload(const bool& _isDownload);

                    /**
                     * 判断参数 IsDownload 是否已赋值
                     * @return IsDownload 是否已赋值
                     * 
                     */
                    bool IsDownloadHasBeenSet() const;

                    /**
                     * 获取需要修改的内容类型  0  无效 1 更新文档cos信息 2 更新文档引用信息 3 更新文档刷新频率 4 腾讯文档刷新
                     * @return ModifyTypes 需要修改的内容类型  0  无效 1 更新文档cos信息 2 更新文档引用信息 3 更新文档刷新频率 4 腾讯文档刷新
                     * 
                     */
                    std::vector<uint64_t> GetModifyTypes() const;

                    /**
                     * 设置需要修改的内容类型  0  无效 1 更新文档cos信息 2 更新文档引用信息 3 更新文档刷新频率 4 腾讯文档刷新
                     * @param _modifyTypes 需要修改的内容类型  0  无效 1 更新文档cos信息 2 更新文档引用信息 3 更新文档刷新频率 4 腾讯文档刷新
                     * 
                     */
                    void SetModifyTypes(const std::vector<uint64_t>& _modifyTypes);

                    /**
                     * 判断参数 ModifyTypes 是否已赋值
                     * @return ModifyTypes 是否已赋值
                     * 
                     */
                    bool ModifyTypesHasBeenSet() const;

                    /**
                     * 获取文档更新频率
                     * @return UpdatePeriodInfo 文档更新频率
                     * 
                     */
                    UpdatePeriodInfo GetUpdatePeriodInfo() const;

                    /**
                     * 设置文档更新频率
                     * @param _updatePeriodInfo 文档更新频率
                     * 
                     */
                    void SetUpdatePeriodInfo(const UpdatePeriodInfo& _updatePeriodInfo);

                    /**
                     * 判断参数 UpdatePeriodInfo 是否已赋值
                     * @return UpdatePeriodInfo 是否已赋值
                     * 
                     */
                    bool UpdatePeriodInfoHasBeenSet() const;

                    /**
                     * 获取自定义切分规则
                     * @return SplitRule 自定义切分规则
                     * 
                     */
                    std::string GetSplitRule() const;

                    /**
                     * 设置自定义切分规则
                     * @param _splitRule 自定义切分规则
                     * 
                     */
                    void SetSplitRule(const std::string& _splitRule);

                    /**
                     * 判断参数 SplitRule 是否已赋值
                     * @return SplitRule 是否已赋值
                     * 
                     */
                    bool SplitRuleHasBeenSet() const;

                    /**
                     * 获取文档生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。
若不传，则不会修改文档生效域。
                     * @return EnableScope 文档生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。
若不传，则不会修改文档生效域。
                     * 
                     */
                    int64_t GetEnableScope() const;

                    /**
                     * 设置文档生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。
若不传，则不会修改文档生效域。
                     * @param _enableScope 文档生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。
若不传，则不会修改文档生效域。
                     * 
                     */
                    void SetEnableScope(const int64_t& _enableScope);

                    /**
                     * 判断参数 EnableScope 是否已赋值
                     * @return EnableScope 是否已赋值
                     * 
                     */
                    bool EnableScopeHasBeenSet() const;

                private:

                    /**
                     * 应用ID，获取方法参看[如何获取   BotBizId](https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa)
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * 文档ID
                     */
                    std::string m_docBizId;
                    bool m_docBizIdHasBeenSet;

                    /**
                     * 是否引用链接
                     */
                    bool m_isRefer;
                    bool m_isReferHasBeenSet;

                    /**
                     * 标签适用范围，1:全部，2:按条件。默认为1。
                     */
                    uint64_t m_attrRange;
                    bool m_attrRangeHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * 关联的标签
                     */
                    std::vector<AttrLabelRefer> m_attrLabels;
                    bool m_attrLabelsHasBeenSet;

                    /**
                     * 网页(或自定义链接)地址
                     */
                    std::string m_webUrl;
                    bool m_webUrlHasBeenSet;

                    /**
                     * 外部引用链接类型 0：系统链接 1：自定义链接
值为1时，WebUrl 字段不能为空，否则不生效。
                     */
                    uint64_t m_referUrlType;
                    bool m_referUrlTypeHasBeenSet;

                    /**
                     * 有效开始时间，单位为unix时间戳
                     */
                    std::string m_expireStart;
                    bool m_expireStartHasBeenSet;

                    /**
                     * 有效结束时间，单位为unix时间戳，默认值为0代表永久有效
                     */
                    std::string m_expireEnd;
                    bool m_expireEndHasBeenSet;

                    /**
                     * 分类ID
                     */
                    std::string m_cateBizId;
                    bool m_cateBizIdHasBeenSet;

                    /**
                     * 是否可下载，IsRefer为true并且ReferUrlType为0时，该值才有意义
                     */
                    bool m_isDownload;
                    bool m_isDownloadHasBeenSet;

                    /**
                     * 需要修改的内容类型  0  无效 1 更新文档cos信息 2 更新文档引用信息 3 更新文档刷新频率 4 腾讯文档刷新
                     */
                    std::vector<uint64_t> m_modifyTypes;
                    bool m_modifyTypesHasBeenSet;

                    /**
                     * 文档更新频率
                     */
                    UpdatePeriodInfo m_updatePeriodInfo;
                    bool m_updatePeriodInfoHasBeenSet;

                    /**
                     * 自定义切分规则
                     */
                    std::string m_splitRule;
                    bool m_splitRuleHasBeenSet;

                    /**
                     * 文档生效域: 1-不生效；2-仅开发域生效；3-仅发布域生效；4-开发域和发布域均生效。
若不传，则不会修改文档生效域。
                     */
                    int64_t m_enableScope;
                    bool m_enableScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYDOCREQUEST_H_
