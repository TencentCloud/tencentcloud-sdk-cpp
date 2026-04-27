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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetVarList请求参数结构体
                */
                class GetVarListRequest : public AbstractModel
                {
                public:
                    GetVarListRequest();
                    ~GetVarListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @return AppBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置<p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * @param _appBizId <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取<p>变量ID数组</p>
                     * @return VarIds <p>变量ID数组</p>
                     * 
                     */
                    std::vector<std::string> GetVarIds() const;

                    /**
                     * 设置<p>变量ID数组</p>
                     * @param _varIds <p>变量ID数组</p>
                     * 
                     */
                    void SetVarIds(const std::vector<std::string>& _varIds);

                    /**
                     * 判断参数 VarIds 是否已赋值
                     * @return VarIds 是否已赋值
                     * 
                     */
                    bool VarIdsHasBeenSet() const;

                    /**
                     * 获取<p>按变量名称关键词搜索</p>
                     * @return Keyword <p>按变量名称关键词搜索</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按变量名称关键词搜索</p>
                     * @param _keyword <p>按变量名称关键词搜索</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>起始偏移量（默认0），取值范围 &gt; 0</p>
                     * @return Offset <p>起始偏移量（默认0），取值范围 &gt; 0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>起始偏移量（默认0），取值范围 &gt; 0</p>
                     * @param _offset <p>起始偏移量（默认0），取值范围 &gt; 0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>限定数量（默认15），取值范围 1-200</p>
                     * @return Limit <p>限定数量（默认15），取值范围 1-200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>限定数量（默认15），取值范围 1-200</p>
                     * @param _limit <p>限定数量（默认15），取值范围 1-200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)</p>
                     * @return VarType <p>按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)</p>
                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置<p>按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)</p>
                     * @param _varType <p>按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)</p>
                     * 
                     */
                    void SetVarType(const std::string& _varType);

                    /**
                     * 判断参数 VarType 是否已赋值
                     * @return VarType 是否已赋值
                     * 
                     */
                    bool VarTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要内部变量, 在结果中包含平台预置的“内置自定义变量” (默认false)。</p><ul><li>当&nbsp;<code>NeedInternalVar = true</code>&nbsp;且&nbsp;<code>VarModuleType</code>&nbsp;为&nbsp;<code>AllVar</code>&nbsp;或&nbsp;<code>ApiVar</code>&nbsp;时，返回列表会在用户变量之前拼入内置变量，并同样支持&nbsp;<code>Keyword</code>&nbsp;<code>VarType</code>&nbsp;<code>VarIds</code>&nbsp;过滤。</li><li>其他<code>VarModuleType</code>下，该开关不生效。</li></ul>
                     * @return NeedInternalVar <p>是否需要内部变量, 在结果中包含平台预置的“内置自定义变量” (默认false)。</p><ul><li>当&nbsp;<code>NeedInternalVar = true</code>&nbsp;且&nbsp;<code>VarModuleType</code>&nbsp;为&nbsp;<code>AllVar</code>&nbsp;或&nbsp;<code>ApiVar</code>&nbsp;时，返回列表会在用户变量之前拼入内置变量，并同样支持&nbsp;<code>Keyword</code>&nbsp;<code>VarType</code>&nbsp;<code>VarIds</code>&nbsp;过滤。</li><li>其他<code>VarModuleType</code>下，该开关不生效。</li></ul>
                     * 
                     */
                    bool GetNeedInternalVar() const;

                    /**
                     * 设置<p>是否需要内部变量, 在结果中包含平台预置的“内置自定义变量” (默认false)。</p><ul><li>当&nbsp;<code>NeedInternalVar = true</code>&nbsp;且&nbsp;<code>VarModuleType</code>&nbsp;为&nbsp;<code>AllVar</code>&nbsp;或&nbsp;<code>ApiVar</code>&nbsp;时，返回列表会在用户变量之前拼入内置变量，并同样支持&nbsp;<code>Keyword</code>&nbsp;<code>VarType</code>&nbsp;<code>VarIds</code>&nbsp;过滤。</li><li>其他<code>VarModuleType</code>下，该开关不生效。</li></ul>
                     * @param _needInternalVar <p>是否需要内部变量, 在结果中包含平台预置的“内置自定义变量” (默认false)。</p><ul><li>当&nbsp;<code>NeedInternalVar = true</code>&nbsp;且&nbsp;<code>VarModuleType</code>&nbsp;为&nbsp;<code>AllVar</code>&nbsp;或&nbsp;<code>ApiVar</code>&nbsp;时，返回列表会在用户变量之前拼入内置变量，并同样支持&nbsp;<code>Keyword</code>&nbsp;<code>VarType</code>&nbsp;<code>VarIds</code>&nbsp;过滤。</li><li>其他<code>VarModuleType</code>下，该开关不生效。</li></ul>
                     * 
                     */
                    void SetNeedInternalVar(const bool& _needInternalVar);

                    /**
                     * 判断参数 NeedInternalVar 是否已赋值
                     * @return NeedInternalVar 是否已赋值
                     * 
                     */
                    bool NeedInternalVarHasBeenSet() const;

                    /**
                     * 获取<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * @return VarModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetVarModuleType() const;

                    /**
                     * 设置<p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * @param _varModuleType <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetVarModuleType(const int64_t& _varModuleType);

                    /**
                     * 判断参数 VarModuleType 是否已赋值
                     * @return VarModuleType 是否已赋值
                     * 
                     */
                    bool VarModuleTypeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID，获取方法参看如何获取   <a href="https://cloud.tencent.com/document/product/1759/109469#4eecb8c1-6ce4-45f5-8fa2-b269449d8efa">BotBizId</a>。</p>
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * <p>变量ID数组</p>
                     */
                    std::vector<std::string> m_varIds;
                    bool m_varIdsHasBeenSet;

                    /**
                     * <p>按变量名称关键词搜索</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>起始偏移量（默认0），取值范围 &gt; 0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>限定数量（默认15），取值范围 1-200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>按变量类型过滤，默认查询所有类型(STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)</p>
                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                    /**
                     * <p>是否需要内部变量, 在结果中包含平台预置的“内置自定义变量” (默认false)。</p><ul><li>当&nbsp;<code>NeedInternalVar = true</code>&nbsp;且&nbsp;<code>VarModuleType</code>&nbsp;为&nbsp;<code>AllVar</code>&nbsp;或&nbsp;<code>ApiVar</code>&nbsp;时，返回列表会在用户变量之前拼入内置变量，并同样支持&nbsp;<code>Keyword</code>&nbsp;<code>VarType</code>&nbsp;<code>VarIds</code>&nbsp;过滤。</li><li>其他<code>VarModuleType</code>下，该开关不生效。</li></ul>
                     */
                    bool m_needInternalVar;
                    bool m_needInternalVarHasBeenSet;

                    /**
                     * <p>变量模块类型</p><p>枚举值：</p><ul><li>0： API参数</li><li>1： 环境参数</li><li>2： 应用参数</li><li>3： 系统参数</li></ul><p>默认值：0</p>
                     */
                    int64_t m_varModuleType;
                    bool m_varModuleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETVARLISTREQUEST_H_
