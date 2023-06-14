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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Polygon.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 医疗发票识别结果
                */
                class MedicalInvoiceItem : public AbstractModel
                {
                public:
                    MedicalInvoiceItem();
                    ~MedicalInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称
<table><tr><td>分类</td><td>name</td></tr><tr><td>票据基本信息</td><td>发票名称</td></tr><tr><td></td><td>票据代码</td></tr><tr><td></td><td>票据号码</td></tr><tr><td></td><td>电子票据代码</td></tr><tr><td></td><td>电子票据号码</td></tr><tr><td></td><td>交款人统一社会信用代码</td></tr><tr><td></td><td>校验码</td></tr><tr><td></td><td>交款人</td></tr><tr><td></td><td>开票日期</td></tr><tr><td></td><td>收款单位</td></tr><tr><td></td><td>复核人</td></tr><tr><td></td><td>收款人</td></tr><tr><td></td><td>业务流水号</td></tr><tr><td></td><td>门诊号</td></tr><tr><td></td><td>就诊日期</td></tr><tr><td></td><td>医疗机构类型</td></tr><tr><td></td><td>医保类型</td></tr><tr><td></td><td>医保编号</td></tr><tr><td></td><td>性别</td></tr><tr><td></td><td>医保统筹基金支付</td></tr><tr><td></td><td>其他支付</td></tr><tr><td></td><td>个人账户支付</td></tr><tr><td></td><td>个人现金支付</td></tr><tr><td></td><td>个人自付</td></tr><tr><td></td><td>个人自费</td></tr><tr><td></td><td>病历号</td></tr><tr><td></td><td>住院号</td></tr><tr><td></td><td>住院科别</td></tr><tr><td></td><td>住院时间</td></tr><tr><td></td><td>预缴金额</td></tr><tr><td></td><td>补缴金额</td></tr><tr><td></td><td>退费金额</td></tr><tr><td></td><td>发票属地</td></tr><tr><td></td><td>发票类型</td></tr><tr><td>总金额</td><td>总金额大写</td></tr><tr><td></td><td>总金额小写</td></tr><tr><td>收费大项</td><td>大项名称</td></tr><tr><td></td><td>大项金额</td></tr><tr><td>收费细项</td><td>项目名称</td></tr><tr><td></td><td>数量</td></tr><tr><td></td><td>单位</td></tr><tr><td></td><td>金额</td></tr><tr><td></td><td>备注</td></tr><tr><td>票据其他信息</td><td>入院时间</td></tr><tr><td></td><td>出院时间</td></tr><tr><td></td><td>住院天数</td></tr><tr><td></td><td>自付二</td></tr><tr><td></td><td>自付一</td></tr><tr><td></td><td>起付金额</td></tr><tr><td></td><td>超封顶金额</td></tr><tr><td></td><td>自费</td></tr><tr><td></td><td>本次医保范围内金额</td></tr><tr><td></td><td>累计医保内范围金额</td></tr><tr><td></td><td>门诊大额支付</td></tr><tr><td></td><td>残军补助支付</td></tr><tr><td></td><td>年度门诊大额累计支付</td></tr><tr><td></td><td>单位补充险[原公疗]支付</td></tr><tr><td></td><td>社会保障卡号</td></tr><tr><td></td><td>姓名</td></tr><tr><td></td><td>交易流水号</td></tr><tr><td></td><td>本次支付后个人账户余额</td></tr><tr><td></td><td>基金支付</td></tr><tr><td></td><td>现金支付</td></tr><tr><td></td><td>复核</td></tr><tr><td></td><td>自负</td></tr><tr><td></td><td>结算方式</td></tr><tr><td></td><td>医保统筹/公医记账</td></tr><tr><td></td><td>其他</td></tr><tr><td></td><td>个人支付金额</td></tr><tr><td></td><td>欠费</td></tr><tr><td></td><td>退休补充支付</td></tr><tr><td></td><td>医院类型</td></tr><tr><td></td><td>退款</td></tr><tr><td></td><td>补收</td></tr><tr><td></td><td>附加支付</td></tr><tr><td></td><td>分类自负</td></tr><tr><td></td><td>其它</td></tr><tr><td></td><td>预交款</td></tr><tr><td></td><td>个人缴费</td></tr></table>
                     * @return Name 识别出的字段名称
<table><tr><td>分类</td><td>name</td></tr><tr><td>票据基本信息</td><td>发票名称</td></tr><tr><td></td><td>票据代码</td></tr><tr><td></td><td>票据号码</td></tr><tr><td></td><td>电子票据代码</td></tr><tr><td></td><td>电子票据号码</td></tr><tr><td></td><td>交款人统一社会信用代码</td></tr><tr><td></td><td>校验码</td></tr><tr><td></td><td>交款人</td></tr><tr><td></td><td>开票日期</td></tr><tr><td></td><td>收款单位</td></tr><tr><td></td><td>复核人</td></tr><tr><td></td><td>收款人</td></tr><tr><td></td><td>业务流水号</td></tr><tr><td></td><td>门诊号</td></tr><tr><td></td><td>就诊日期</td></tr><tr><td></td><td>医疗机构类型</td></tr><tr><td></td><td>医保类型</td></tr><tr><td></td><td>医保编号</td></tr><tr><td></td><td>性别</td></tr><tr><td></td><td>医保统筹基金支付</td></tr><tr><td></td><td>其他支付</td></tr><tr><td></td><td>个人账户支付</td></tr><tr><td></td><td>个人现金支付</td></tr><tr><td></td><td>个人自付</td></tr><tr><td></td><td>个人自费</td></tr><tr><td></td><td>病历号</td></tr><tr><td></td><td>住院号</td></tr><tr><td></td><td>住院科别</td></tr><tr><td></td><td>住院时间</td></tr><tr><td></td><td>预缴金额</td></tr><tr><td></td><td>补缴金额</td></tr><tr><td></td><td>退费金额</td></tr><tr><td></td><td>发票属地</td></tr><tr><td></td><td>发票类型</td></tr><tr><td>总金额</td><td>总金额大写</td></tr><tr><td></td><td>总金额小写</td></tr><tr><td>收费大项</td><td>大项名称</td></tr><tr><td></td><td>大项金额</td></tr><tr><td>收费细项</td><td>项目名称</td></tr><tr><td></td><td>数量</td></tr><tr><td></td><td>单位</td></tr><tr><td></td><td>金额</td></tr><tr><td></td><td>备注</td></tr><tr><td>票据其他信息</td><td>入院时间</td></tr><tr><td></td><td>出院时间</td></tr><tr><td></td><td>住院天数</td></tr><tr><td></td><td>自付二</td></tr><tr><td></td><td>自付一</td></tr><tr><td></td><td>起付金额</td></tr><tr><td></td><td>超封顶金额</td></tr><tr><td></td><td>自费</td></tr><tr><td></td><td>本次医保范围内金额</td></tr><tr><td></td><td>累计医保内范围金额</td></tr><tr><td></td><td>门诊大额支付</td></tr><tr><td></td><td>残军补助支付</td></tr><tr><td></td><td>年度门诊大额累计支付</td></tr><tr><td></td><td>单位补充险[原公疗]支付</td></tr><tr><td></td><td>社会保障卡号</td></tr><tr><td></td><td>姓名</td></tr><tr><td></td><td>交易流水号</td></tr><tr><td></td><td>本次支付后个人账户余额</td></tr><tr><td></td><td>基金支付</td></tr><tr><td></td><td>现金支付</td></tr><tr><td></td><td>复核</td></tr><tr><td></td><td>自负</td></tr><tr><td></td><td>结算方式</td></tr><tr><td></td><td>医保统筹/公医记账</td></tr><tr><td></td><td>其他</td></tr><tr><td></td><td>个人支付金额</td></tr><tr><td></td><td>欠费</td></tr><tr><td></td><td>退休补充支付</td></tr><tr><td></td><td>医院类型</td></tr><tr><td></td><td>退款</td></tr><tr><td></td><td>补收</td></tr><tr><td></td><td>附加支付</td></tr><tr><td></td><td>分类自负</td></tr><tr><td></td><td>其它</td></tr><tr><td></td><td>预交款</td></tr><tr><td></td><td>个人缴费</td></tr></table>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称
<table><tr><td>分类</td><td>name</td></tr><tr><td>票据基本信息</td><td>发票名称</td></tr><tr><td></td><td>票据代码</td></tr><tr><td></td><td>票据号码</td></tr><tr><td></td><td>电子票据代码</td></tr><tr><td></td><td>电子票据号码</td></tr><tr><td></td><td>交款人统一社会信用代码</td></tr><tr><td></td><td>校验码</td></tr><tr><td></td><td>交款人</td></tr><tr><td></td><td>开票日期</td></tr><tr><td></td><td>收款单位</td></tr><tr><td></td><td>复核人</td></tr><tr><td></td><td>收款人</td></tr><tr><td></td><td>业务流水号</td></tr><tr><td></td><td>门诊号</td></tr><tr><td></td><td>就诊日期</td></tr><tr><td></td><td>医疗机构类型</td></tr><tr><td></td><td>医保类型</td></tr><tr><td></td><td>医保编号</td></tr><tr><td></td><td>性别</td></tr><tr><td></td><td>医保统筹基金支付</td></tr><tr><td></td><td>其他支付</td></tr><tr><td></td><td>个人账户支付</td></tr><tr><td></td><td>个人现金支付</td></tr><tr><td></td><td>个人自付</td></tr><tr><td></td><td>个人自费</td></tr><tr><td></td><td>病历号</td></tr><tr><td></td><td>住院号</td></tr><tr><td></td><td>住院科别</td></tr><tr><td></td><td>住院时间</td></tr><tr><td></td><td>预缴金额</td></tr><tr><td></td><td>补缴金额</td></tr><tr><td></td><td>退费金额</td></tr><tr><td></td><td>发票属地</td></tr><tr><td></td><td>发票类型</td></tr><tr><td>总金额</td><td>总金额大写</td></tr><tr><td></td><td>总金额小写</td></tr><tr><td>收费大项</td><td>大项名称</td></tr><tr><td></td><td>大项金额</td></tr><tr><td>收费细项</td><td>项目名称</td></tr><tr><td></td><td>数量</td></tr><tr><td></td><td>单位</td></tr><tr><td></td><td>金额</td></tr><tr><td></td><td>备注</td></tr><tr><td>票据其他信息</td><td>入院时间</td></tr><tr><td></td><td>出院时间</td></tr><tr><td></td><td>住院天数</td></tr><tr><td></td><td>自付二</td></tr><tr><td></td><td>自付一</td></tr><tr><td></td><td>起付金额</td></tr><tr><td></td><td>超封顶金额</td></tr><tr><td></td><td>自费</td></tr><tr><td></td><td>本次医保范围内金额</td></tr><tr><td></td><td>累计医保内范围金额</td></tr><tr><td></td><td>门诊大额支付</td></tr><tr><td></td><td>残军补助支付</td></tr><tr><td></td><td>年度门诊大额累计支付</td></tr><tr><td></td><td>单位补充险[原公疗]支付</td></tr><tr><td></td><td>社会保障卡号</td></tr><tr><td></td><td>姓名</td></tr><tr><td></td><td>交易流水号</td></tr><tr><td></td><td>本次支付后个人账户余额</td></tr><tr><td></td><td>基金支付</td></tr><tr><td></td><td>现金支付</td></tr><tr><td></td><td>复核</td></tr><tr><td></td><td>自负</td></tr><tr><td></td><td>结算方式</td></tr><tr><td></td><td>医保统筹/公医记账</td></tr><tr><td></td><td>其他</td></tr><tr><td></td><td>个人支付金额</td></tr><tr><td></td><td>欠费</td></tr><tr><td></td><td>退休补充支付</td></tr><tr><td></td><td>医院类型</td></tr><tr><td></td><td>退款</td></tr><tr><td></td><td>补收</td></tr><tr><td></td><td>附加支付</td></tr><tr><td></td><td>分类自负</td></tr><tr><td></td><td>其它</td></tr><tr><td></td><td>预交款</td></tr><tr><td></td><td>个人缴费</td></tr></table>
                     * @param _name 识别出的字段名称
<table><tr><td>分类</td><td>name</td></tr><tr><td>票据基本信息</td><td>发票名称</td></tr><tr><td></td><td>票据代码</td></tr><tr><td></td><td>票据号码</td></tr><tr><td></td><td>电子票据代码</td></tr><tr><td></td><td>电子票据号码</td></tr><tr><td></td><td>交款人统一社会信用代码</td></tr><tr><td></td><td>校验码</td></tr><tr><td></td><td>交款人</td></tr><tr><td></td><td>开票日期</td></tr><tr><td></td><td>收款单位</td></tr><tr><td></td><td>复核人</td></tr><tr><td></td><td>收款人</td></tr><tr><td></td><td>业务流水号</td></tr><tr><td></td><td>门诊号</td></tr><tr><td></td><td>就诊日期</td></tr><tr><td></td><td>医疗机构类型</td></tr><tr><td></td><td>医保类型</td></tr><tr><td></td><td>医保编号</td></tr><tr><td></td><td>性别</td></tr><tr><td></td><td>医保统筹基金支付</td></tr><tr><td></td><td>其他支付</td></tr><tr><td></td><td>个人账户支付</td></tr><tr><td></td><td>个人现金支付</td></tr><tr><td></td><td>个人自付</td></tr><tr><td></td><td>个人自费</td></tr><tr><td></td><td>病历号</td></tr><tr><td></td><td>住院号</td></tr><tr><td></td><td>住院科别</td></tr><tr><td></td><td>住院时间</td></tr><tr><td></td><td>预缴金额</td></tr><tr><td></td><td>补缴金额</td></tr><tr><td></td><td>退费金额</td></tr><tr><td></td><td>发票属地</td></tr><tr><td></td><td>发票类型</td></tr><tr><td>总金额</td><td>总金额大写</td></tr><tr><td></td><td>总金额小写</td></tr><tr><td>收费大项</td><td>大项名称</td></tr><tr><td></td><td>大项金额</td></tr><tr><td>收费细项</td><td>项目名称</td></tr><tr><td></td><td>数量</td></tr><tr><td></td><td>单位</td></tr><tr><td></td><td>金额</td></tr><tr><td></td><td>备注</td></tr><tr><td>票据其他信息</td><td>入院时间</td></tr><tr><td></td><td>出院时间</td></tr><tr><td></td><td>住院天数</td></tr><tr><td></td><td>自付二</td></tr><tr><td></td><td>自付一</td></tr><tr><td></td><td>起付金额</td></tr><tr><td></td><td>超封顶金额</td></tr><tr><td></td><td>自费</td></tr><tr><td></td><td>本次医保范围内金额</td></tr><tr><td></td><td>累计医保内范围金额</td></tr><tr><td></td><td>门诊大额支付</td></tr><tr><td></td><td>残军补助支付</td></tr><tr><td></td><td>年度门诊大额累计支付</td></tr><tr><td></td><td>单位补充险[原公疗]支付</td></tr><tr><td></td><td>社会保障卡号</td></tr><tr><td></td><td>姓名</td></tr><tr><td></td><td>交易流水号</td></tr><tr><td></td><td>本次支付后个人账户余额</td></tr><tr><td></td><td>基金支付</td></tr><tr><td></td><td>现金支付</td></tr><tr><td></td><td>复核</td></tr><tr><td></td><td>自负</td></tr><tr><td></td><td>结算方式</td></tr><tr><td></td><td>医保统筹/公医记账</td></tr><tr><td></td><td>其他</td></tr><tr><td></td><td>个人支付金额</td></tr><tr><td></td><td>欠费</td></tr><tr><td></td><td>退休补充支付</td></tr><tr><td></td><td>医院类型</td></tr><tr><td></td><td>退款</td></tr><tr><td></td><td>补收</td></tr><tr><td></td><td>附加支付</td></tr><tr><td></td><td>分类自负</td></tr><tr><td></td><td>其它</td></tr><tr><td></td><td>预交款</td></tr><tr><td></td><td>个人缴费</td></tr></table>
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
                     * 获取识别出的字段名称对应的值，也就是字段name对应的字符串结果
                     * @return Content 识别出的字段名称对应的值，也就是字段name对应的字符串结果
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段name对应的字符串结果
                     * @param _content 识别出的字段名称对应的值，也就是字段name对应的字符串结果
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取识别出的文本行四点坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vertex 识别出的文本行四点坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Polygon GetVertex() const;

                    /**
                     * 设置识别出的文本行四点坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vertex 识别出的文本行四点坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVertex(const Polygon& _vertex);

                    /**
                     * 判断参数 Vertex 是否已赋值
                     * @return Vertex 是否已赋值
                     * 
                     */
                    bool VertexHasBeenSet() const;

                    /**
                     * 获取识别出的文本行在旋转纠正之后的图像中的像素坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coord 识别出的文本行在旋转纠正之后的图像中的像素坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Rect GetCoord() const;

                    /**
                     * 设置识别出的文本行在旋转纠正之后的图像中的像素坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coord 识别出的文本行在旋转纠正之后的图像中的像素坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoord(const Rect& _coord);

                    /**
                     * 判断参数 Coord 是否已赋值
                     * @return Coord 是否已赋值
                     * 
                     */
                    bool CoordHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段名称
<table><tr><td>分类</td><td>name</td></tr><tr><td>票据基本信息</td><td>发票名称</td></tr><tr><td></td><td>票据代码</td></tr><tr><td></td><td>票据号码</td></tr><tr><td></td><td>电子票据代码</td></tr><tr><td></td><td>电子票据号码</td></tr><tr><td></td><td>交款人统一社会信用代码</td></tr><tr><td></td><td>校验码</td></tr><tr><td></td><td>交款人</td></tr><tr><td></td><td>开票日期</td></tr><tr><td></td><td>收款单位</td></tr><tr><td></td><td>复核人</td></tr><tr><td></td><td>收款人</td></tr><tr><td></td><td>业务流水号</td></tr><tr><td></td><td>门诊号</td></tr><tr><td></td><td>就诊日期</td></tr><tr><td></td><td>医疗机构类型</td></tr><tr><td></td><td>医保类型</td></tr><tr><td></td><td>医保编号</td></tr><tr><td></td><td>性别</td></tr><tr><td></td><td>医保统筹基金支付</td></tr><tr><td></td><td>其他支付</td></tr><tr><td></td><td>个人账户支付</td></tr><tr><td></td><td>个人现金支付</td></tr><tr><td></td><td>个人自付</td></tr><tr><td></td><td>个人自费</td></tr><tr><td></td><td>病历号</td></tr><tr><td></td><td>住院号</td></tr><tr><td></td><td>住院科别</td></tr><tr><td></td><td>住院时间</td></tr><tr><td></td><td>预缴金额</td></tr><tr><td></td><td>补缴金额</td></tr><tr><td></td><td>退费金额</td></tr><tr><td></td><td>发票属地</td></tr><tr><td></td><td>发票类型</td></tr><tr><td>总金额</td><td>总金额大写</td></tr><tr><td></td><td>总金额小写</td></tr><tr><td>收费大项</td><td>大项名称</td></tr><tr><td></td><td>大项金额</td></tr><tr><td>收费细项</td><td>项目名称</td></tr><tr><td></td><td>数量</td></tr><tr><td></td><td>单位</td></tr><tr><td></td><td>金额</td></tr><tr><td></td><td>备注</td></tr><tr><td>票据其他信息</td><td>入院时间</td></tr><tr><td></td><td>出院时间</td></tr><tr><td></td><td>住院天数</td></tr><tr><td></td><td>自付二</td></tr><tr><td></td><td>自付一</td></tr><tr><td></td><td>起付金额</td></tr><tr><td></td><td>超封顶金额</td></tr><tr><td></td><td>自费</td></tr><tr><td></td><td>本次医保范围内金额</td></tr><tr><td></td><td>累计医保内范围金额</td></tr><tr><td></td><td>门诊大额支付</td></tr><tr><td></td><td>残军补助支付</td></tr><tr><td></td><td>年度门诊大额累计支付</td></tr><tr><td></td><td>单位补充险[原公疗]支付</td></tr><tr><td></td><td>社会保障卡号</td></tr><tr><td></td><td>姓名</td></tr><tr><td></td><td>交易流水号</td></tr><tr><td></td><td>本次支付后个人账户余额</td></tr><tr><td></td><td>基金支付</td></tr><tr><td></td><td>现金支付</td></tr><tr><td></td><td>复核</td></tr><tr><td></td><td>自负</td></tr><tr><td></td><td>结算方式</td></tr><tr><td></td><td>医保统筹/公医记账</td></tr><tr><td></td><td>其他</td></tr><tr><td></td><td>个人支付金额</td></tr><tr><td></td><td>欠费</td></tr><tr><td></td><td>退休补充支付</td></tr><tr><td></td><td>医院类型</td></tr><tr><td></td><td>退款</td></tr><tr><td></td><td>补收</td></tr><tr><td></td><td>附加支付</td></tr><tr><td></td><td>分类自负</td></tr><tr><td></td><td>其它</td></tr><tr><td></td><td>预交款</td></tr><tr><td></td><td>个人缴费</td></tr></table>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段name对应的字符串结果
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 识别出的文本行四点坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Polygon m_vertex;
                    bool m_vertexHasBeenSet;

                    /**
                     * 识别出的文本行在旋转纠正之后的图像中的像素坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Rect m_coord;
                    bool m_coordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MEDICALINVOICEITEM_H_
